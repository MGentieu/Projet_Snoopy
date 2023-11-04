//
// Created by 33695 on 05/11/2023.
//
#include <stdio.h>
#include "manip_fichiers_txt.h"

void charge_plateau_Niveau1_depart(Plateau * ptPlateau){
    FILE * pF= fopen("Niveau1_vide.txt","r");
    char c='a';
    for(char i=0;i<10;i++){
        for(char j=0;j<20;j++){
            ptPlateau->maMatrice[i][j]= (char)getc(pF);
        }
        c=(char)getc(pF);
    }
    fclose(pF);
}

void charge_plateau_Niveau2_depart(Plateau * ptPlateau){
    FILE * pF= fopen("Niveau2_vide.txt","r");
    char c='a';
    for(char i=0;i<10;i++){
        for(char j=0;j<20;j++){
            ptPlateau->maMatrice[i][j]= (char)getc(pF);
        }
        c=(char)getc(pF);
    }
    fclose(pF);
}

void charge_plateau_Niveau3_depart(Plateau * ptPlateau){
    FILE * pF= fopen("Niveau3_vide.txt","r");
    char c='a';
    for(char i=0;i<10;i++){
        for(char j=0;j<20;j++){
            ptPlateau->maMatrice[i][j]= (char)getc(pF);
        }
        c=(char)getc(pF);
    }
    fclose(pF);
}

void charge_plateau_Niveau4_depart(Plateau * ptPlateau){
    FILE * pF= fopen("Niveau4_vide.txt","r");
    char c='a';
    for(char i=0;i<10;i++){
        for(char j=0;j<20;j++){
            ptPlateau->maMatrice[i][j]= (char)getc(pF);
        }
        c=(char)getc(pF);
    }
    fclose(pF);
}

void read_mots_de_passe(Chaine *ps1, Chaine *ps2,Chaine *ps3, Chaine *ps4){
    FILE * pF= fopen("mots_de_passe.txt","r");
    fgets(ps1->myStr, STRING_MAX_LENGTH-1,pF);
    fgets(ps2->myStr, STRING_MAX_LENGTH-1,pF);
    fgets(ps3->myStr, STRING_MAX_LENGTH-1,pF);
    fgets(ps4->myStr, STRING_MAX_LENGTH-1,pF);
    fclose(pF);
}

void read_un_mot(char buf[]){
    FILE * pF= fopen("mots_de_passe.txt","r");
    fgets(buf,STRING_MAX_LENGTH,pF);
    fclose(pF);
}