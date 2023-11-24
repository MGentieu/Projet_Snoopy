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
#include "Gestion_du_jeu.h"

int menu(){
    int choix = 0;
    int verif=1;
    do {
        system("cls");
        printf("1. Livret de regles.\n"
               "2. Commencer une nouvelle partie.\n"
               "3. Charger une sauvegarde.\n"
               "4. Charger un niveau avec un mot de passe.\n"
               "5. Afficher les scores.\n"
               "6. Quitter.\n\n"
               "Choissez ce que vous voulez faire :\n");
        saisie_entier_utilisateur(&choix);
    }while(choix<1||choix>6);

    Plateau p;

    Chaine mdp1;
    Chaine mdp2;
    Chaine mdp3;
    Chaine mdp4;
    char buf[STRING_MAX_LENGTH];

    switch(choix){
        case 1:
            system("cls");
            affichage_option_1();
            system("pause");
            break;
        case 2:
            system("cls");
            p.mode_de_jeu=5;
            initialisation_plateau_scores(&p);
            saisie_nom_joueur(&p);
            //A partir des fichiers, on charge les 4 plateaux des 4 niveaux.
            system("cls");
            charge_plateau_Niveau1_depart(&p);
            affiche_plateau_entier(&p);
            jouer(&p,&verif);
            if(!verif){
                break;
            }
            else{
                p.mode_de_jeu++;
            }
            charge_plateau_Niveau2_depart(&p);
            affiche_plateau_entier(&p);
            jouer(&p,&verif);
            if(!verif){
                break;
            }
            else{
                p.mode_de_jeu++;
            }
            charge_plateau_Niveau3_depart(&p);
            affiche_plateau_entier(&p);

            jouer(&p,&verif);
            if(!verif){
                break;
            }
            else{
                p.mode_de_jeu++;
            }
            charge_plateau_Niveau4_depart(&p);
            affiche_plateau_entier(&p);
            jouer(&p,&verif);
            break;
        case 3:
            system("cls");
            system("pause");
            system("cls");
            break;
        case 4:
            system("cls");
            saisie_nom_joueur(&p);
            option4_menu(&p);
            jouer(&p,&verif);
            break;
        case 5:
            system("cls");
            option5_menu(&p,&verif);
            system("pause");
            system("cls");
            break;
        case 6:
            return 0;
        default:
            return 0;
    }
    return 1;
}