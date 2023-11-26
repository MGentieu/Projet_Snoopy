//
// Created by 33695 on 22/11/2023.
//

#include <stdio.h>
#include <Windows.h>
#include <conio.h>
#include <time.h>
#include "Gestion_du_jeu.h"
#include "Gestion_des_sauvegardes.h"
#include "manip_affichage_console.h"
#include "manip_fichiers_txt.h"
#include "Structures.h"
#include "gestion_du_temps.h"

void affiche_donnees_importantes(){
    printf("Temps restant :\n");
    printf("Nb de vies restantes :\n");
    printf("Score_actuel :\n");
    printf("Appuyez sur 'J' pour sauvegarder.\n");
    printf("Appuyez sur 'P' pour quitter.\n");
    printf("Appuyez sur 'K' pour mettre en pause.\n");
    printf("'Q' pour gauche / 'S' pour bas / 'D' pour droite / 'Z' pour haut.\n");
}

int verif_nb_de_vies(Plateau * ptPlateau){
    return ptPlateau->nb_de_vies>0;
    //return 1;
}

void game_over(){
    system("cls");
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
    printf(R"EOF(   ___     ___   __  __    ___              ___   __   __   ___     ___
  / __|   /   \ |  \/  |  | __|     o O O  / _ \  \ \ / /  | __|   | _ \
 | (_ |   | - | | |\/| |  | _|     o      | (_) |  \ V /   | _|    |   /
  \___|   |_|_| |_|__|_|  |___|   TS__[O]  \___/   _\_/_   |___|   |_|_\
_|"""""|_|"""""|_|"""""|_|"""""| {======|_|"""""|_| """"|_|"""""|_|"""""|
"`-0-0-'"`-0-0-'"`-0-0-'"`-0-0-'./o--000'"`-0-0-'"`-0-0-'"`-0-0-'"`-0-0-'
)EOF");
    printf("\n\n");
    printf("Vous n'avez plus de vies!\n");
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    printf("Par votre faute ");
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    printf("Babouche Le Vilain");
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    printf("a attrap%c votre ami",130);
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    printf(" Snoopy");
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    printf(" les bananes dans le sac!\nAux dernieres nouvelles,");
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    printf(" Snoopy");
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    printf("aurait %ct%c appercu %crant dans les favelas m%cxicaines sous les ordres de ",130,130,130,130);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    printf("Babouche Le Vilain");
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    printf("...\n\n");
    SetConsoleTextAttribute(hConsole, FOREGROUND_INTENSITY);
    printf("Nous allons maintenant retourner au menu\n");
    system("pause");
    system("cls");
}

void jouer(Plateau * ptPlateau,int * ptVerif){
    //affiche_donnees_importantes();
    char avant='0';
    unsigned char x=ptPlateau->X_Snoopy;
    unsigned char y=ptPlateau->Y_Snoopy;
    unsigned char xavt=ptPlateau->X_Snoopy;
    unsigned char yavt=ptPlateau->Y_Snoopy;
    char key= '0';
    int etat =0;
    //affiche_donnees_importantes();
    affiche_donnees_plateau_nb_vies(ptPlateau);
    affiche_donnees_plateau_score(ptPlateau);
    char entree='0';
    int verif=1; //Check s'il reste des vies.
    int verif2=1; //Check s'il reste du temps.
    int verif3=1; //Check s'il reste des oiseaux à ramasser;
    //ptPlateau->temps_restant=120;
    affiche_temps(ptPlateau->temps_restant);
    //int dec=120;
    long long stock=0;
    time_t timer;
    init_compteur(&stock,&timer);
    do{
        while(!kbhit()){
            //Instruction de gestion du temps.
            if(verif_fin_niveau(ptPlateau)){
                up_score_car_niveau_fini(ptPlateau);
                verif3=0;
                goto_ligne_colonne(0,23);
                printf("BRAVO ! Vous avez fini le niveau!\n"
                       "Votre score actuel est de %d.\n",ptPlateau->score);
                system("pause");
                return;
            }
            if(decompte_corrige(&(ptPlateau->temps_restant),&stock,&timer,ptPlateau)){
                etat++;
                if(etat==3){
                    bloc_intermitant(ptPlateau,etat);
                    //affiche_plateau_entier(ptPlateau);
                    affiche_plateau_entier_simple(ptPlateau);
                }
                if(etat==6){
                    bloc_intermitant(ptPlateau,etat);
                    //affiche_plateau_entier(ptPlateau);
                    affiche_plateau_entier_simple(ptPlateau);
                    etat=0;
                }
                balle2(ptPlateau);
                //affiche_plateau_entier(ptPlateau);
            }
            //lance la balle


            //affiche_donnes_plateau(ptPlateau);
            if(verif2&&ptPlateau->temps_restant==0){
                verif2=0;
                ptPlateau->nb_de_vies--;
                //affiche_donnees_plateau_nb_vies(ptPlateau);
            }
            if(!verif_nb_de_vies(ptPlateau)){
                *ptVerif=0;
                game_over();
                return;
            }
            if(!verif2){
                break;
            }
        }
        if(!verif_nb_de_vies(ptPlateau)){
            *ptVerif=0;
            game_over();
            return;
        }
        else if(!verif2){
            //verif=0;
            goto_ligne_colonne(0,20);
            printf("Vous n'avez plus de temps!\nAppuyez sur une touche pour continuer.\n");
            entree=(char)getch();
            entree='c';
        }
        else{
            entree=(char)getch();
        }

        switch(entree){
            case 'j':
                goto_ligne_colonne(0,19);
                sauvegarder_fichier(ptPlateau);
                *ptVerif=0;
                break;
            case 'p':
                *ptVerif=0;
                break;
            case 'k':

                do{
                    entree=(char)getch();
                }while(entree!='k');

                break;
            case 'c':
                //Continue. Juste un test.
                if(!verif||!verif2){
                    break;
                }
                else{
                    entree='a';
                }
                break;
            case 'z':
                if(xavt>0&& verif_collisions(ptPlateau,ptPlateau->X_Snoopy-1,ptPlateau->Y_Snoopy)){
                    x=xavt-1;
                    ptPlateau->maMatrice[ptPlateau->X_Snoopy][ptPlateau->Y_Snoopy]=avant;
                    vraigotoligcol(ptPlateau->X_Snoopy,ptPlateau->Y_Snoopy);
                    affiche_char_selon_entier_simple(avant);
                    ptPlateau->X_Snoopy=x;
                    if(verif_banane(ptPlateau,ptPlateau->X_Snoopy,ptPlateau->Y_Snoopy)){
                        avant='0';
                        ptPlateau->nb_oiseaux_restants--;
                    }
                    else{
                        avant=ptPlateau->maMatrice[ptPlateau->X_Snoopy][ptPlateau->Y_Snoopy];
                    }
                    vraigotoligcol(ptPlateau->X_Snoopy,ptPlateau->Y_Snoopy);
                    affiche_char_selon_entier_simple('7');
                    ptPlateau->maMatrice[ptPlateau->X_Snoopy][ptPlateau->Y_Snoopy]='7';
                    //affiche_plateau_entier(ptPlateau);
                    xavt=x;
                }
                else if ((ptPlateau->maMatrice[ptPlateau->X_Snoopy-1][ptPlateau->Y_Snoopy] == '6')
                         &&(verif_collisions(ptPlateau, ptPlateau->X_Snoopy - 2, ptPlateau->Y_Snoopy))) {
                    x = xavt - 1;
                    ptPlateau->maMatrice[ptPlateau->X_Snoopy][ptPlateau->Y_Snoopy] = avant;
                    ptPlateau->X_Snoopy = x;
                    avant = ptPlateau->maMatrice[ptPlateau->X_Snoopy][ptPlateau->Y_Snoopy];
                    ptPlateau->maMatrice[ptPlateau->X_Snoopy][ptPlateau->Y_Snoopy] = '7';
                    ptPlateau->maMatrice[ptPlateau->X_Snoopy+1][ptPlateau->Y_Snoopy] = '0';
                    ptPlateau->maMatrice[ptPlateau->X_Snoopy-1][ptPlateau->Y_Snoopy] = '6';
                    affiche_plateau_entier(ptPlateau);
                    xavt = x;
                }

                break;
            case 'q':
                if(yavt>0&&verif_collisions(ptPlateau,ptPlateau->X_Snoopy,ptPlateau->Y_Snoopy-1)) {
                    y = yavt - 1;
                    ptPlateau->maMatrice[ptPlateau->X_Snoopy][ptPlateau->Y_Snoopy]=avant;
                    vraigotoligcol(ptPlateau->X_Snoopy,ptPlateau->Y_Snoopy);
                    affiche_char_selon_entier_simple(avant);
                    ptPlateau->Y_Snoopy = y;
                    if(verif_banane(ptPlateau,ptPlateau->X_Snoopy,ptPlateau->Y_Snoopy)){
                        avant='0';
                        ptPlateau->nb_oiseaux_restants--;
                    }
                    else{
                        avant=ptPlateau->maMatrice[ptPlateau->X_Snoopy][ptPlateau->Y_Snoopy];
                    }
                    vraigotoligcol(ptPlateau->X_Snoopy,ptPlateau->Y_Snoopy);
                    affiche_char_selon_entier_simple('7');
                    ptPlateau->maMatrice[ptPlateau->X_Snoopy][ptPlateau->Y_Snoopy]='7';
                    //affiche_plateau_entier(ptPlateau);
                    yavt=y;
                }
                else if ((ptPlateau->maMatrice[ptPlateau->X_Snoopy][ptPlateau->Y_Snoopy-1] == '6')
                         &&(verif_collisions(ptPlateau, ptPlateau->X_Snoopy, ptPlateau->Y_Snoopy-2))) {
                    y = yavt - 1;
                    ptPlateau->maMatrice[ptPlateau->X_Snoopy][ptPlateau->Y_Snoopy] = avant;
                    ptPlateau->Y_Snoopy = y;
                    avant = ptPlateau->maMatrice[ptPlateau->X_Snoopy][ptPlateau->Y_Snoopy];
                    ptPlateau->maMatrice[ptPlateau->X_Snoopy][ptPlateau->Y_Snoopy] = '7';
                    ptPlateau->maMatrice[ptPlateau->X_Snoopy][ptPlateau->Y_Snoopy + 1] = '0';
                    ptPlateau->maMatrice[ptPlateau->X_Snoopy][ptPlateau->Y_Snoopy - 1] = '6';
                    affiche_plateau_entier(ptPlateau);
                    yavt = y;
                }

                break;
            case 's':
                if(xavt<9&&verif_collisions(ptPlateau,ptPlateau->X_Snoopy+1,ptPlateau->Y_Snoopy)) {
                    x = xavt + 1;
                    ptPlateau->maMatrice[ptPlateau->X_Snoopy][ptPlateau->Y_Snoopy]=avant;
                    vraigotoligcol(ptPlateau->X_Snoopy,ptPlateau->Y_Snoopy);
                    affiche_char_selon_entier_simple(avant);
                    ptPlateau->X_Snoopy=x;
                    if(verif_banane(ptPlateau,ptPlateau->X_Snoopy,ptPlateau->Y_Snoopy)){
                        avant='0';
                        ptPlateau->nb_oiseaux_restants--;
                    }
                    else{
                        avant=ptPlateau->maMatrice[ptPlateau->X_Snoopy][ptPlateau->Y_Snoopy];
                    }
                    vraigotoligcol(ptPlateau->X_Snoopy,ptPlateau->Y_Snoopy);
                    affiche_char_selon_entier_simple('7');
                    ptPlateau->maMatrice[ptPlateau->X_Snoopy][ptPlateau->Y_Snoopy]='7';
                    //affiche_plateau_entier(ptPlateau);
                    xavt=x;
                }
                else if ((ptPlateau->maMatrice[ptPlateau->X_Snoopy+1][ptPlateau->Y_Snoopy] == '6')
                         &&(verif_collisions(ptPlateau, ptPlateau->X_Snoopy + 2, ptPlateau->Y_Snoopy))) {
                    x = xavt + 1;
                    ptPlateau->maMatrice[ptPlateau->X_Snoopy][ptPlateau->Y_Snoopy] = avant;
                    ptPlateau->X_Snoopy = x;
                    avant = ptPlateau->maMatrice[ptPlateau->X_Snoopy][ptPlateau->Y_Snoopy];
                    ptPlateau->maMatrice[ptPlateau->X_Snoopy][ptPlateau->Y_Snoopy] = '7';
                    ptPlateau->maMatrice[ptPlateau->X_Snoopy-1][ptPlateau->Y_Snoopy] = '0';
                    ptPlateau->maMatrice[ptPlateau->X_Snoopy+1][ptPlateau->Y_Snoopy] = '6';
                    affiche_plateau_entier(ptPlateau);
                    xavt = x;
                }
                else {
                        if (kbhit()){
                            key = getch() ;
                            switch(key){
                                case 'q':
                                    ptPlateau->maMatrice[ptPlateau->X_Snoopy][ptPlateau->Y_Snoopy+1] = '0';
                                    break;
                                case 'd':
                                    ptPlateau->maMatrice[ptPlateau->X_Snoopy][ptPlateau->Y_Snoopy-1] = '0';
                                    break;
                            }
                        }

                }

                break;
            case 'd':
                if(yavt<19&&verif_collisions(ptPlateau,ptPlateau->X_Snoopy,ptPlateau->Y_Snoopy+1)) {
                    y = yavt + 1;
                    ptPlateau->maMatrice[ptPlateau->X_Snoopy][ptPlateau->Y_Snoopy]=avant;
                    vraigotoligcol(ptPlateau->X_Snoopy,ptPlateau->Y_Snoopy);
                    affiche_char_selon_entier_simple(avant);
                    ptPlateau->Y_Snoopy = y;
                    if(verif_banane(ptPlateau,ptPlateau->X_Snoopy,ptPlateau->Y_Snoopy)){
                        avant='0';
                        ptPlateau->nb_oiseaux_restants--;
                    }
                    else{
                        avant=ptPlateau->maMatrice[ptPlateau->X_Snoopy][ptPlateau->Y_Snoopy];
                    }
                    vraigotoligcol(ptPlateau->X_Snoopy,ptPlateau->Y_Snoopy);
                    affiche_char_selon_entier_simple('7');
                    ptPlateau->maMatrice[ptPlateau->X_Snoopy][ptPlateau->Y_Snoopy]='7';
                    //affiche_plateau_entier(ptPlateau);
                    yavt=y;
                }
                else if ((ptPlateau->maMatrice[ptPlateau->X_Snoopy][ptPlateau->Y_Snoopy+1] == '6')
                         &&(verif_collisions(ptPlateau, ptPlateau->X_Snoopy, ptPlateau->Y_Snoopy+2))) {
                    y = yavt + 1;
                    ptPlateau->maMatrice[ptPlateau->X_Snoopy][ptPlateau->Y_Snoopy] = avant;
                    ptPlateau->Y_Snoopy = y;
                    avant = ptPlateau->maMatrice[ptPlateau->X_Snoopy][ptPlateau->Y_Snoopy];
                    ptPlateau->maMatrice[ptPlateau->X_Snoopy][ptPlateau->Y_Snoopy] = '7';
                    ptPlateau->maMatrice[ptPlateau->X_Snoopy][ptPlateau->Y_Snoopy-1] = '0';
                    ptPlateau->maMatrice[ptPlateau->X_Snoopy][ptPlateau->Y_Snoopy+1] = '6';
                    affiche_plateau_entier(ptPlateau);
                    yavt = y;
                }
                break;
            case 'b':
                bloc_cassable(ptPlateau);
                break;
            }

        }while(*ptVerif&&entree!='c');
    //if()
    system("cls");
}

int verif_collisions(Plateau * ptPlateau,unsigned char X_test, unsigned char Y_test){
    return (ptPlateau->maMatrice[X_test][Y_test]=='0'||ptPlateau->maMatrice[X_test][Y_test]=='9');
}

int verif_banane(Plateau * ptPlateau,unsigned char X_test, unsigned char Y_test){
    return (ptPlateau->maMatrice[X_test][Y_test]=='9');
}

void up_score_car_niveau_fini(Plateau * ptPlateau){
    ptPlateau->score+=ptPlateau->temps_restant*100;
}

int verif_fin_niveau(Plateau * ptPlateau){
    return ptPlateau->nb_oiseaux_restants<=0;
}

void verif_bloc_pieges(Plateau * ptPlateau, unsigned char X_test, unsigned char Y_test){
    if(ptPlateau->maMatrice[X_test][Y_test]=='3'){
        ptPlateau->maMatrice[X_test][Y_test]='0';
        vraigotoligcol(X_test,Y_test);
        affiche_char_selon_entier_simple('0');
        ptPlateau->nb_de_vies--;

    }

}


/*
do{
xavt=x;
yavt=y;
x+=dx;
y+=dy;
//Gérons maintenant les problèmes de bordure :
if(x>20) x=20;
if(y>10) y=10;
if(x<0) x=0;
if(y<0) y=0;
//Gérons maintenant l'affichage de Snoopy:
//Premièrement, on supprime l'affichage de Snoopy :
goto_ligne_colonne(4*xavt,yavt);
printf(" ");
//On affiche Snoopy après son déplacement :
goto_ligne_colonne(4*x,y);
printf("%c",0x02);
//On note maintenant la valeur de la touche appuyée par le joueur :
if (kbhit()){
key = getch() ;
switch(key){
case 'z': dx=0;dy=1;
break;
case 'q': dx=-1;dy=0;
break;
case 's': dx=0;dy=-1;
break;
case 'd': dx=1;dy=0;
break;
}
}
*/

