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
    return ptPlateau->nb_de_vies>2;
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

    char entree='0';
    int verif=1; //Check s'il reste des vies.
    int verif2=1; //Check s'il reste du temps.
    ptPlateau->temps_restant=15;
    affiche_temps(ptPlateau->temps_restant);
    //int dec=120;
    long long stock=0;
    time_t timer;
    init_compteur(&stock,&timer);
    do{
        while(!kbhit()){
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
        }
        if(verif_nb_de_vies(ptPlateau)){
            *ptVerif=0;
            game_over();
            return;
        }
        else{
            verif=0;
            entree='c';
        }

        switch(entree){
            case 'j':
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
                if(!verif){
                    break;
                }
                else{
                    entree='a';
                }
        }
    }while(*ptVerif&&entree!='c');
    //if()
    //system("cls");
}

