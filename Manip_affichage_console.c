//
// Created by 33695 on 24/10/2023.
//
#include <windows.h>
#include <stdio.h>
#include "manip_affichage_console.h"
#include "Structures.h"

void goto_ligne_colonne(short ligne,short colonne){
    COORD mycoord;
    mycoord.X = ligne;
    mycoord.Y = colonne;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),mycoord);
}

void affiche_plateau_entier(Plateau * ptPlateau){
    printf("\n");

    for(char i=0;i<10;i++){
        for(char j=0;j<20;j++){
            affiche_char_selon_entier(ptPlateau->maMatrice[i][j]);
        }
        printf("\n");
    }
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
            printf("%3c|",' ');
            break;
        case '1':
            //printf("%3c|",0x06);
            printf("%3c|",0x3D);
            break;
        case '2':
            printf("%3c|",0x1A);
            break;
        case '3':
            printf("%3c|",0x05);
            break;
        case '4':
            printf("%3c|",0xDC);
            break;
        case '5':
            printf("%3c|",0x0F);
            break;
        case '6':
            printf("%3c|",0xC4);
            break;
        case '7':
            //printf("%3c|",0x02);
            printf("%3c|",0x12);
            break;
        case '8':
            printf("%3c|",0x13);
            break;
        case '9':
            //printf("%3c|",0x1F);
            printf("%3c|",0x14);
            break;
        default :
            break;
    }
}