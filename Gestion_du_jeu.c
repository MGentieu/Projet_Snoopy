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
    printf("Q pour gauche / S pour bas / D pour droite / Z pour haut.\n");
}

int verif_nb_de_vies(Plateau * ptPlateau){
    return ptPlateau->nb_de_vies>-1;
    //return 1;
}

void game_over(){
    system("cls");
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
    printf("Game Over! Vous n'avez plus de vies!\n");
    SetConsoleTextAttribute(hConsole, FOREGROUND_INTENSITY);
    printf("Nous allons maintenant retourner au menu\n");
    system("pause");
    system("cls");
}

void jouer(Plateau * ptPlateau,int * ptVerif){
    //affiche_donnees_importantes();
    //affiche_donnees_plateau_nb_vies(ptPlateau);
    //affiche_donnees_plateau_score(ptPlateau);
    char entree='0';
    int verif=1; //Check s'il reste des vies.
    int verif2=1; //Check s'il reste du temps.
    //ptPlateau->temps_restant=5;
    //affiche_temps(ptPlateau->temps_restant);
    //int dec=120;
    long long stock=0;
    time_t timer;
    init_compteur(&stock,&timer);
    do{
        while(!kbhit()){
            //Instruction de gestion du temps.
            //decompte();

            decompte_corrige(&(ptPlateau->temps_restant),&stock,&timer,ptPlateau);
            //affiche_donnes_plateau(ptPlateau);
            if(verif2&&ptPlateau->temps_restant==0){
                verif2=0;
                ptPlateau->nb_de_vies--;
                affiche_donnees_plateau_nb_vies(ptPlateau);
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
            entree=(char)getch();
        }

        switch(entree){
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
        }
    }while(*ptVerif&&entree!='c');
    //if()
    system("cls");
}

