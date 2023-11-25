#include<stdio.h>
#include "manip_fichiers_txt.h"
#include "manip_affichage_console.h"
#include<stdlib.h>
#include<time.h>
// Initialise la direction de la balle au début du jeu
int dir_balle(Plateau * ptPlateau){
    int dir_rand = 0;
    srand(time(NULL));
    dir_rand= 0 + rand() % 4;
    switch(dir_rand){
        case 0:
            return 0;
            break;
        case 1:
            return 1;
            break;
        case 2:
            return 2;
            break;
        case 3:
            return 3;
            break;
    }
}
// Code de la Balle
void balle(Plateau * ptPlateau){
    unsigned char case_ecrase;
    switch(ptPlateau->direction_balle){
        // Bas Gauche
        case 0:
            // On  se place à la position de la balle selon sa direction
            goto_ligne_colonne(ptPlateau->Y_Balle*4+1,ptPlateau->X_Balle);
            printf(" ");
            goto_ligne_colonne((ptPlateau->Y_Balle)*(4-1)+1,ptPlateau->X_Balle+1);
            case_ecrase=ptPlateau->maMatrice[ptPlateau->Y_Balle*4+1-1][ptPlateau->X_Balle+1];
            printf("%c",0x0B);
            break;
            // Bas Droit
        case 1:
            goto_ligne_colonne(ptPlateau->Y_Balle*4+1,ptPlateau->X_Balle);
            printf(" ");
            goto_ligne_colonne(ptPlateau->Y_Balle*(4+1)+1,ptPlateau->X_Balle+1);
            case_ecrase=ptPlateau->maMatrice[ptPlateau->Y_Balle*4+1-1][ptPlateau->X_Balle+1];
            printf("%c",0x0B);
            break;
            // Haut Gauche
        case 2:
            goto_ligne_colonne(ptPlateau->Y_Balle*4+1,ptPlateau->X_Balle);
            printf(" ");
            goto_ligne_colonne(ptPlateau->Y_Balle*(4-1)+1,ptPlateau->X_Balle-1);
            case_ecrase=ptPlateau->maMatrice[ptPlateau->Y_Balle*4+1-1][ptPlateau->X_Balle+1];
            printf("%c",0x0B);
            break;
        // Haut Droit
        case 3:
            goto_ligne_colonne(ptPlateau->Y_Balle*4+1,ptPlateau->X_Balle);
            printf(" ");
            goto_ligne_colonne(ptPlateau->Y_Balle*(4+1)+1,ptPlateau->X_Balle-1);
            case_ecrase=ptPlateau->maMatrice[ptPlateau->Y_Balle*4+1-1][ptPlateau->X_Balle+1];
            printf("%c",0x0B);
            break;
    }
}