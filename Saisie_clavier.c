//
// Created by 33695 on 24/10/2023.
//

#include <stdio.h>
#include <stdlib.h>
#include "saisie_clavier.h"

void saisie_entier_utilisateur(int * ptInt){

    char tab_entrees[15]; // Permet à l'utilisateur de saisir 15 caractères.
    //printf("Veuillez saisir un entier au clavier : ");
    fgets(tab_entrees, 15, stdin); //Récupère la chaîne de 15 caractères saisie au clavier
    char * endPtr; //Pointeur vers le premier caractère qui n'est pas un chiffre
    int verif = (int)strtol(tab_entrees, &endPtr, 10); // verif = la combinaison des premiers chiffres entrés au clavier.

    if(endPtr == tab_entrees){ //Vérifie que l'entier saisi est bien un entier.
        printf("Ce n'etait pas un entier. Nous allons quitter le programme.\n");
        exit(EXIT_FAILURE);
    }
    *ptInt = verif; //si tout est bon, la valeur pointée par ptInt est mise à jour.
}

void saisie_float_utilisateur(float * ptFloat){

    char tab_entrees[15]; // Permet à l'utilisateur de saisir 15 caractères.
    //printf("Veuillez saisir un floatant au clavier : ");
    fgets(tab_entrees, 15, stdin); //Récupère la chaîne de 15 caractères saisie au clavier
    char * endPtr; //Pointeur vers le premier caractère qui n'est pas un chiffre
    float verif = strtof(tab_entrees, &endPtr); // verif = la combinaison des premiers chiffres entrés au clavier.

    if(endPtr == tab_entrees){ //Vérifie que l'entier saisi est bien un entier.
        printf("Ce n'etait pas un floatant. Nous allons quitter le programme.\n");
        exit(EXIT_FAILURE);
    }
    *ptFloat = verif; //si tout est bon, la valeur pointée par ptInt est mise à jour.
}

