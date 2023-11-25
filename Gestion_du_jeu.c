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
    printf("Game Over! Vous n'avez plus de vies!\n"
           "Nous allons maintenant retourner au menu\n");
    system("pause");
    system("cls");
}

void jouer(Plateau * ptPlateau,int * ptVerif){
    affiche_donnees_importantes();

    short x=ptPlateau->X_Snoopy, y=ptPlateau->Y_Snoopy, dx, dy;
    short xavt, yavt;
    char key= '0';
    char entree='0';
    int verif=1; //Check s'il reste des vies.
    int verif2=1; //Check s'il reste du temps.
    ptPlateau->temps_restant=55;
    affiche_temps(ptPlateau->temps_restant);
    //int dec=120;
    long long stock=0;
    time_t timer;
    init_compteur(&stock,&timer);
    do{
        while(!kbhit()){ //Instructions tant qu'on n'a pas tapé un caractère
            //Instruction de gestion du temps.
            //decompte();
            decompte_corrige(&(ptPlateau->temps_restant),&stock,&timer);
            if(verif2&&ptPlateau->temps_restant==0){
                verif2=0;
                ptPlateau->nb_de_vies--;
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
            goto_ligne_colonne(0,19);
            printf("Vous n'avez plus de temps!\nAppuyez sur une touche pour continuer.\n");
            entree=(char)getch();
            entree='c';
        }
        else{
            entree=(char)getch(); //Si tout va bien, on récuoère le caractère tapé
        }

        switch(entree){ //Instructions en fonction du caractère tapé
            case 'j':
                goto_ligne_colonne(0,18);
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
            }
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
        }while (key !='l');
    }while(*ptVerif&&entree!='c');
    //if()
    system("cls");
}



