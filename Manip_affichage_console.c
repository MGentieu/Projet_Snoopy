//
// Created by 33695 on 24/10/2023.
//
#include <windows.h>
#include <stdio.h>
#include "manip_affichage_console.h"
#include "Structures.h"
#include "Gestion_du_jeu.h"

void goto_ligne_colonne(short ligne,short colonne){
    COORD mycoord;
    mycoord.X = ligne;
    mycoord.Y = colonne;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),mycoord);
}

void affiche_plateau_entier(Plateau * ptPlateau){
    system("cls");
    goto_ligne_colonne(38,0);
    if(ptPlateau->mode_de_jeu==1||ptPlateau->mode_de_jeu==5){
        printf("NIVEAU 1");
    }
    else if(ptPlateau->mode_de_jeu==2||ptPlateau->mode_de_jeu==6){
        printf("NIVEAU 2");
    }
    else if(ptPlateau->mode_de_jeu==3||ptPlateau->mode_de_jeu==7){
        printf("NIVEAU 3");
    }
    else{
        printf("NIVEAU 4");
    }
    goto_ligne_colonne(0,1);
    //printf("\n");

    for(char i=0;i<10;i++){
        for(char j=0;j<20;j++){
            affiche_char_selon_entier(ptPlateau->maMatrice[i][j]);
        }
        printf("\n");
    }
    affiche_donnees_importantes();
    affiche_donnees_plateau_temps(ptPlateau);
    affiche_donnees_plateau_score(ptPlateau);
    affiche_donnees_plateau_nb_vies(ptPlateau);
}

//Caractère 1 bloc cassable pique : 0x06
//Caractère 2 bloc poussable :
//  vers la gauche : 0x1B
//  vers la droite : 0x1A
//  vers le haut : 0x18
//  vers le bas : 0x19
//Caractère 3 bloc piégé trèfle : 0x05
//Caractère 4 bloc invincible : 0xDC
//Caractère 5 Bloc disparition/apparition : 0x0F
//Caractère 6 Bloc à pousser : 0xC4
//Caractère 7 Snoopy : 0x02
//Caractère 8 balle (signe mâle) : 0x0B
// Caractère 9 oiseau (musique) : 0x0E

void affiche_char_selon_entier(char n){
    switch(n){
        case '0':
            printf(" %c |",' ');
            break;
        case '20':
            printf(" %c |",' ');
            break;
        case '1':
            printf(" %c |",0x06);
            //printf(" %c |",0x3D);
            break;
        case '2':
            printf(" %c |",0x1A);
            break;
        case '3':
            printf(" %c |",0x05);
            break;
        case '4':
            //printf(" %c |",0xDC);
            printf(" %c |",0x16);
            break;
        case '5':
            printf(" %c |",0x04);
            break;
        case '6':
            printf(" %c |",0xC4);
            break;
        case '7':
            printf(" %c |",0x02);
            //printf(" %c |",0x12);
            break;
        case '8':
            printf(" %c |",0x13);
            break;
        case '9':
            //printf(" %c |",0x1F);
            printf(" %c |",0x14);
            break;
        default :
            printf(" %c |",' ');
            break;

    }
}

void affiche_donnees_plateau_temps(Plateau * ptPlateau){
    goto_ligne_colonne(15,11);
    printf("%3d",ptPlateau->temps_restant);
}

void affiche_donnees_plateau_nb_vies(Plateau * ptPlateau){
    goto_ligne_colonne(24,12);
    printf("%d",ptPlateau->nb_de_vies);
}

void affiche_donnees_plateau_score(Plateau * ptPlateau){
    goto_ligne_colonne(14,13);
    printf("%5d",ptPlateau->score);
}
