//
// Created by 33695 on 24/10/2023.
//
#include <stdio.h>
#include <stdlib.h>
#include "Structures.h"
#include "manip_affichage_console.h"
#include "manip_fichiers_txt.h"
#include "saisie_clavier.h"
#include "Chargement_Niveaux.h"

int menu(){
    int choix = 0;
    do {
        printf("1. Livret de regles.\n"
               "2. Commencer une nouvelle partie.\n"
               "3. Charger une sauvegarde.\n"
               "4. Charger un niveau avec un mot de passe.\n"
               "5. Afficher les scores.\n"
               "6. Quitter.\n\n"
               "Choissez ce que vous voulez faire :\n");
        saisie_entier_utilisateur(&choix);
    }while(choix<1||choix>6);

    Plateau p1;
    Plateau p2;
    Plateau p3;
    Plateau p4;

    Chaine mdp1;
    Chaine mdp2;
    Chaine mdp3;
    Chaine mdp4;
    char buf[STRING_MAX_LENGTH];

    switch(choix){
        case 1:
            break;
        case 2:
            //A partir des fichiers, on charge les 4 plateaux des 4 niveaux.
            charge_plateau_Niveau1_depart(&p1);
            charge_plateau_Niveau2_depart(&p2);
            charge_plateau_Niveau3_depart(&p3);
            charge_plateau_Niveau4_depart(&p4);
            //On affiche ensuite ces plateaux :
            printf("\n");
            affiche_plateau_entier(&p1);
            printf("\n\n");
            affiche_plateau_entier(&p2);
            printf("\n\n");
            affiche_plateau_entier(&p3);
            printf("\n\n");
            affiche_plateau_entier(&p4);
            printf("\n\n");


            break;
        case 3:
            break;
        case 4:
            //read_un_mot(buf);
            //printf("%s\n",buf);
            read_mots_de_passe(&mdp1, &mdp2, &mdp3, &mdp4);
            printf("%s\n",mdp1.myStr);
            printf("%s\n",mdp2.myStr);
            printf("%s\n",mdp3.myStr);
            printf("%s\n",mdp4.myStr);
            break;
        case 5:
            break;
        case 6:
            return 0;
        default:
            return 0;
    }
    return 1;
}