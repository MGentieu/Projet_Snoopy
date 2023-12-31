//
// Created by 33695 on 19/11/2023.
//
#include <stdio.h>
#include <stdlib.h>
#include "saisie_clavier.h"
#include "manip_fichiers_txt.h"

#include "Structures.h"
#include "Chargement_Niveaux.h"

int option4_menu(Plateau *ptPlateau){
    Chaine mdp1;
    Chaine mdp2;
    Chaine mdp3;
    Chaine mdp4;
    Chaine mdp_lu;
    read_mots_de_passe(&mdp1, &mdp2, &mdp3, &mdp4);
    //printf("%s\n",mdp1.myStr);
    //printf("%s\n",mdp2.myStr);
    //printf("%s\n",mdp3.myStr);
    //printf("%s\n",mdp4.myStr);
    int n=0;
    do{
        printf("Selectionnez le niveau que vous voulez charger, de 1 a 4 :\n");
        saisie_entier_utilisateur(&n);

    }while(n<1||n>4);
    ptPlateau->mode_de_jeu=n; ///Pour la sauvegarde
    initialisation_plateau_scores(ptPlateau);
    printf("Saisissez le mot de passe du niveau %d:\n",n);
    saisie_chaine_utilisateur(&mdp_lu);
    switch(n){
        case 1:
            if(compare_mots_de_passe(&mdp_lu,&mdp1)){
                system("cls");
                charge_plateau_Niveau1_depart(ptPlateau);
                affiche_plateau_entier(ptPlateau);
                return 1;
            }
            else{
                system("cls");
                printf("Mauvais mot de passe. 'P' pour retourner au menu.\n");
                return 0;
            }

        case 2:
            if(compare_mots_de_passe(&mdp_lu,&mdp2)){
                system("cls");
                charge_plateau_Niveau2_depart(ptPlateau);
                affiche_plateau_entier(ptPlateau);
                return 1;
            }
            else{
                system("cls");
                printf("Mauvais mot de passe. 'P' pour retourner au menu.\n");
                return 0;
            }

        case 3:
            if(compare_mots_de_passe(&mdp_lu,&mdp3)){

                system("cls");
                charge_plateau_Niveau3_depart(ptPlateau);
                affiche_plateau_entier(ptPlateau);
                return 1;
            }
            else{
                system("cls");
                printf("Mauvais mot de passe. 'P' pour retourner au menu.\n");
                return 0;
            }

        case 4:
            if(compare_mots_de_passe(&mdp_lu,&mdp4)){
                system("cls");
                charge_plateau_Niveau4_depart(ptPlateau);
                affiche_plateau_entier(ptPlateau);
                return 1;
            }
            else{
                system("cls");
                printf("'P' pour retourner au menu.\n");
                return 0;
            }

        default:
            printf("Erreur de saisie. Retour au menu.\n");
            return 0;

    }
}