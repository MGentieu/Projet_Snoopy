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

void jouer(Plateau * ptPlateau,int * ptVerif){
    affiche_donnees_importantes();
    affiche_temps(ptPlateau->temps_restant);
    char entree='0';
    ptPlateau->temps_restant=120;
    //int dec=120;
    long long stock=0;
    time_t timer;
    init_compteur(&stock,&timer);
    do{
        while(!kbhit()){
            //Instruction de gestion du temps.
            //decompte();
            decompte_corrige(&(ptPlateau->temps_restant),&stock,&timer);
        }
        entree=(char)getch();
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
                break;
        }
    }while(*ptVerif&&entree!='c');
    system("cls");
}