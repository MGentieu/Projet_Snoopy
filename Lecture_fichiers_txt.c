//
// Created by 33695 on 05/11/2023.
//
#include <stdio.h>
#include "manip_fichiers_txt.h"
#include "gestion_du_temps.h"
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
    ptPlateau->nb_oiseaux_restants=4;
    ptPlateau->X_Snoopy=4;
    ptPlateau->Y_Snoopy=10;
    ptPlateau->direction_snoopy=1;
    ptPlateau->X_Balle=8;
    ptPlateau->avant_balle='0';
    ptPlateau->avant_snoopy='0';
    ptPlateau->Y_Balle=6;
    ptPlateau->direction_balle=dir_balle(ptPlateau);
    ptPlateau->temps_restant=120;
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
    ptPlateau->nb_oiseaux_restants=4;
    ptPlateau->X_Snoopy=4;
    ptPlateau->Y_Snoopy=0;
    ptPlateau->direction_snoopy=1;
    ptPlateau->avant_balle='0';
    ptPlateau->avant_snoopy='0';
    ptPlateau->X_Balle=5;
    ptPlateau->Y_Balle=11;
    ptPlateau->direction_balle=dir_balle(ptPlateau);
    ptPlateau->temps_restant=120;
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
    ptPlateau->nb_oiseaux_restants=4;
    ptPlateau->X_Snoopy=4;
    ptPlateau->Y_Snoopy=10;
    ptPlateau->direction_snoopy=1;
    ptPlateau->X_Balle=8;
    ptPlateau->Y_Balle=7;
    ptPlateau->avant_balle='0';
    ptPlateau->avant_snoopy='0';
    ptPlateau->direction_balle=dir_balle(ptPlateau);
    ptPlateau->X_Balle2=8;
    ptPlateau->Y_Balle2=12;
    ptPlateau->direction_balle2=dir_balle(ptPlateau);
    ptPlateau->temps_restant=120;
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
    ptPlateau->nb_oiseaux_restants=4;
    ptPlateau->X_Snoopy=5;
    ptPlateau->Y_Snoopy=0;
    ptPlateau->direction_snoopy=1;
    ptPlateau->X_Balle=6;
    ptPlateau->Y_Balle=7;
    ptPlateau->direction_balle=dir_balle(ptPlateau);
    ptPlateau->avant_balle='0';
    ptPlateau->avant_snoopy='0';
    ptPlateau->X_Balle2=6;
    ptPlateau->Y_Balle2=14;
    ptPlateau->direction_balle2=dir_balle(ptPlateau);
    ptPlateau->temps_restant=120;
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