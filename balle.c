#include<stdio.h>
#include "manip_fichiers_txt.h"
#include "manip_affichage_console.h"
#include<stdlib.h>
#include<time.h>
#include "Structures.h"
// Initialise la direction de la balle au début du jeu
int dir_balle(Plateau * ptPlateau){
    int dir_rand = 0;
    srand(time(NULL));
    dir_rand= 0 + rand() % 4;
    switch(dir_rand){
        case 0:
            return 0;

        case 1:
            return 1;

        case 2:
            return 2;

        case 3:
            return 3;

    }
}
// Code de la Balle
void balle(Plateau * ptPlateau){
    unsigned char case_ecrase;
    if(ptPlateau->X_Balle<=0){
        ptPlateau->coli_h1 = true;
    }
    else{
        ptPlateau->coli_h1 = false;
    }
    if(ptPlateau->X_Balle>=9){
        ptPlateau->coli_b1 = true;
    }
    else{
        ptPlateau->coli_b1 = false;
    }
    if(ptPlateau->Y_Balle>=19){
        ptPlateau->coli_d1 = true;
    }
    else{
        ptPlateau->coli_d1 = false;
    }
    if(ptPlateau->Y_Balle<=0){
        ptPlateau->coli_g1 = true;
    }
    else{
        ptPlateau->coli_g1 = false;
    }

    switch(ptPlateau->direction_balle){
        // Bas Gauche
        case 0:
            // On  se place à la position de la balle selon sa direction
            goto_ligne_colonne(ptPlateau->Y_Balle*3,ptPlateau->X_Balle);
            printf(" ");
            goto_ligne_colonne((ptPlateau->Y_Balle*3)+1,ptPlateau->X_Balle+1);
            case_ecrase=ptPlateau->maMatrice[ptPlateau->Y_Balle*4+1-1][ptPlateau->X_Balle+1];
            printf("%c",0x13);
            ////////////// COLISIONS /////////////////////////
            if(ptPlateau->coli_g1 == true && ptPlateau->coli_b1 == true){
                ptPlateau->direction_balle = 3;
            }
            else if(ptPlateau->coli_g1 == true && ptPlateau->coli_b1 == false){
                ptPlateau->direction_balle = 1;
            }
            else if(ptPlateau->coli_g1 == false && ptPlateau->coli_b1 == true){
                ptPlateau->direction_balle = 2;
            }
                break;
            // Bas Droit
        case 1:
            goto_ligne_colonne(ptPlateau->Y_Balle*3,ptPlateau->X_Balle);
            printf(" ");
            goto_ligne_colonne(ptPlateau->Y_Balle*(3)+1,ptPlateau->X_Balle+1);
            case_ecrase=ptPlateau->maMatrice[ptPlateau->Y_Balle*4+1-1][ptPlateau->X_Balle+1];
            printf("%c",0x13);
            ////////////// COLISIONS /////////////////////////
            if(ptPlateau->coli_d1 == true && ptPlateau->coli_b1 == true){
                ptPlateau->direction_balle = 2;
            }
            else if(ptPlateau->coli_d1 == true && ptPlateau->coli_b1 == false){
                ptPlateau->direction_balle = 0;
            }
            else if(ptPlateau->coli_d1 == false && ptPlateau->coli_b1 == true){
                ptPlateau->direction_balle = 3;
            }
            break;
            // Haut Gauche
        case 2:
            goto_ligne_colonne(ptPlateau->Y_Balle*3,ptPlateau->X_Balle);
            printf(" ");
            goto_ligne_colonne(ptPlateau->Y_Balle*(3)+1,ptPlateau->X_Balle-1);
            case_ecrase=ptPlateau->maMatrice[ptPlateau->Y_Balle*4+1-1][ptPlateau->X_Balle+1];
            printf("%c",0x13);
            ////////////// COLISIONS /////////////////////////
            if(ptPlateau->coli_h1 == true && ptPlateau->coli_g1 == true){
                ptPlateau->direction_balle = 1;
            }
            else if(ptPlateau->coli_g1 == true && ptPlateau->coli_h1 == false){
                ptPlateau->direction_balle = 3;
            }
            else if(ptPlateau->coli_g1 == false && ptPlateau->coli_h1 == true){
                ptPlateau->direction_balle = 0;
            }
            break;
        // Haut Droit
        case 3:
            goto_ligne_colonne(ptPlateau->Y_Balle*3,ptPlateau->X_Balle);
            printf(" ");
            goto_ligne_colonne(ptPlateau->Y_Balle*(3)+1,ptPlateau->X_Balle-1);
            case_ecrase=ptPlateau->maMatrice[ptPlateau->Y_Balle*4+1-1][ptPlateau->X_Balle+1];
            printf("%c",0x13);
            ////////////// COLISIONS /////////////////////////
            if(ptPlateau->coli_h1 == true && ptPlateau->coli_d1 == true){
                ptPlateau->direction_balle = 0;
            }
            else if(ptPlateau->coli_d1 == true && ptPlateau->coli_h1 == false){
                ptPlateau->direction_balle = 2;
            }
            else if(ptPlateau->coli_d1 == false && ptPlateau->coli_h1 == true){
                ptPlateau->direction_balle = 1;
            }
            break;
    }
}

void balle2(Plateau * ptPlateau){
    switch(ptPlateau->direction_balle){
        case 0: //Direction haut-droite
            if(ptPlateau->X_Balle<=0&&ptPlateau->Y_Balle>=19){
                ptPlateau->direction_balle=2;
            }
            else if(ptPlateau->X_Balle<=0){
                ptPlateau->direction_balle=3;
            }
            else if(ptPlateau->Y_Balle>=19){
                ptPlateau->direction_balle=1;
            }
            break;
        case 1: //Direction haut-gauche
            if(ptPlateau->X_Balle<=0&&ptPlateau->Y_Balle<=0){
                ptPlateau->direction_balle=3;
            }
            else if(ptPlateau->X_Balle<=0){
                ptPlateau->direction_balle=2;
            }
            else if(ptPlateau->Y_Balle<=0){
                ptPlateau->direction_balle=0;
            }
            break;
        case 2: //Direction bas-gauche
            if(ptPlateau->X_Balle>=9&&ptPlateau->Y_Balle<=0){
                ptPlateau->direction_balle=0;
            }
            else if(ptPlateau->X_Balle>=9){
                ptPlateau->direction_balle=1;
            }
            else if(ptPlateau->Y_Balle<=0){
                ptPlateau->direction_balle=3;
            }
            break;
        case 3: //Direction bas-droite
            if(ptPlateau->X_Balle>=9&&ptPlateau->Y_Balle>=19){
                ptPlateau->direction_balle=1;
            }
            else if(ptPlateau->X_Balle>=9){
                ptPlateau->direction_balle=0;
            }
            else if(ptPlateau->Y_Balle>=19){
                ptPlateau->direction_balle=2;
            }
            break;

    }

    switch(ptPlateau->direction_balle){
        case 0:
            ptPlateau->maMatrice[ptPlateau->X_Balle][ptPlateau->Y_Balle]=ptPlateau->avant_balle;
            ptPlateau->avant_balle=ptPlateau->maMatrice[ptPlateau->X_Balle-1][ptPlateau->Y_Balle+1];
            ptPlateau->maMatrice[ptPlateau->X_Balle-1][ptPlateau->Y_Balle+1]='8';
            ptPlateau->X_Balle--;
            ptPlateau->Y_Balle++;
            break;
        case 1:
            ptPlateau->maMatrice[ptPlateau->X_Balle][ptPlateau->Y_Balle]=ptPlateau->avant_balle;
            ptPlateau->avant_balle=ptPlateau->maMatrice[ptPlateau->X_Balle-1][ptPlateau->Y_Balle-1];
            ptPlateau->maMatrice[ptPlateau->X_Balle-1][ptPlateau->Y_Balle-1]='8';
            ptPlateau->X_Balle--;
            ptPlateau->Y_Balle--;
            break;
        case 2:
            ptPlateau->maMatrice[ptPlateau->X_Balle][ptPlateau->Y_Balle]=ptPlateau->avant_balle;
            ptPlateau->avant_balle=ptPlateau->maMatrice[ptPlateau->X_Balle+1][ptPlateau->Y_Balle-1];
            ptPlateau->maMatrice[ptPlateau->X_Balle+1][ptPlateau->Y_Balle-1]='8';
            ptPlateau->X_Balle++;
            ptPlateau->Y_Balle--;
            break;
        case 3:
            ptPlateau->maMatrice[ptPlateau->X_Balle][ptPlateau->Y_Balle]=ptPlateau->avant_balle;
            ptPlateau->avant_balle=ptPlateau->maMatrice[ptPlateau->X_Balle+1][ptPlateau->Y_Balle+1];
            ptPlateau->maMatrice[ptPlateau->X_Balle+1][ptPlateau->Y_Balle+1]='8';
            ptPlateau->X_Balle++;
            ptPlateau->Y_Balle++;
            break;
    }
}


