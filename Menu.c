//
// Created by 33695 on 24/10/2023.
//
#include <stdio.h>
#include <stdlib.h>
#include "manip_affichage_console.h"
#include "saisie_clavier.h"

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

    switch(choix){
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
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