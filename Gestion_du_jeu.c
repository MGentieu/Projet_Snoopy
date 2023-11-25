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
    printf("nb de vies restantes :\n");
    printf("score_actuel :\n");
    printf("Appuyez sur j pour sauvegarder.\n");
    printf("Appuyez sur p pour quitter.\n");
    printf("Appuyez sur k pour mettre en pause.\n");
    printf("q pour gauche / s pour bas / d pour droite / z pour haut.\n");
}

int verif_nb_de_vies(Plateau * ptPlateau){
    return ptPlateau->nb_de_vies>0;
    //return 1;
}



void game_over(){
    system("cls");
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
    printf("********   ******** ********    ******   **    **\n");
    printf("**    **   **       **    **    **   *** **    **\n");
    printf("***    **  ***      ***    **   **    ** **    **\n");
    printf("*** ****   ******** *** ****    **    ** **    **\n");
    printf("**         ***      **    ***   **    ** **    **\n");
    printf("**         **       **    ****  **   *** **    **\n");
    printf("**         ******** **     **** ******    ****** \n");
    printf("\n\n\n");
    printf("Vous n'avez plus de vies!\n");
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
    ptPlateau->temps_restant=120;
    affiche_temps(ptPlateau->temps_restant);
    //int dec=120;
    long long stock=0;
    time_t timer;
    init_compteur(&stock,&timer);
    do{
        while(!kbhit()){
            //Instruction de gestion du temps.
            if(decompte_corrige(&(ptPlateau->temps_restant),&stock,&timer,ptPlateau)){
                etat++;
                if(etat==3){
                    bloc_intermitant(ptPlateau,etat);
                }
                if(etat==6){
                    bloc_intermitant(ptPlateau,etat);
                    etat=0;
                }
                balle2(ptPlateau);
                affiche_plateau_entier(ptPlateau);
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
                    ptPlateau->X_Snoopy=x;
                    avant=ptPlateau->maMatrice[ptPlateau->X_Snoopy][ptPlateau->Y_Snoopy];
                    ptPlateau->maMatrice[ptPlateau->X_Snoopy][ptPlateau->Y_Snoopy]='7';
                    affiche_plateau_entier(ptPlateau);
                    xavt=x;
                }
                break;
            case 'q':
                if(yavt>0&&verif_collisions(ptPlateau,ptPlateau->X_Snoopy,ptPlateau->Y_Snoopy-1)) {
                    y = yavt - 1;
                    ptPlateau->maMatrice[ptPlateau->X_Snoopy][ptPlateau->Y_Snoopy]=avant;
                    ptPlateau->Y_Snoopy = y;
                    avant=ptPlateau->maMatrice[ptPlateau->X_Snoopy][ptPlateau->Y_Snoopy];
                    ptPlateau->maMatrice[ptPlateau->X_Snoopy][ptPlateau->Y_Snoopy]='7';
                    affiche_plateau_entier(ptPlateau);
                    yavt=y;
                }

                break;
            case 's':
                if(xavt<9&&verif_collisions(ptPlateau,ptPlateau->X_Snoopy+1,ptPlateau->Y_Snoopy)) {
                    x = xavt + 1;
                    ptPlateau->maMatrice[ptPlateau->X_Snoopy][ptPlateau->Y_Snoopy]=avant;
                    ptPlateau->X_Snoopy=x;
                    avant=ptPlateau->maMatrice[ptPlateau->X_Snoopy][ptPlateau->Y_Snoopy];
                    ptPlateau->maMatrice[ptPlateau->X_Snoopy][ptPlateau->Y_Snoopy]='7';
                    affiche_plateau_entier(ptPlateau);
                    xavt=x;
                }

                break;
            case 'd':
                if(yavt<19&&verif_collisions(ptPlateau,ptPlateau->X_Snoopy,ptPlateau->Y_Snoopy+1)) {
                    y = yavt + 1;
                    ptPlateau->maMatrice[ptPlateau->X_Snoopy][ptPlateau->Y_Snoopy]=avant;
                    ptPlateau->Y_Snoopy = y;
                    avant=ptPlateau->maMatrice[ptPlateau->X_Snoopy][ptPlateau->Y_Snoopy];
                    ptPlateau->maMatrice[ptPlateau->X_Snoopy][ptPlateau->Y_Snoopy]='7';
                    affiche_plateau_entier(ptPlateau);
                    yavt=y;
                }


                break;
            }

        }while(*ptVerif&&entree!='c');
    //if()
    system("cls");
}

int verif_collisions(Plateau * ptPlateau,unsigned char X_test, unsigned char Y_test){
    return (ptPlateau->maMatrice[X_test][Y_test]=='0');
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

