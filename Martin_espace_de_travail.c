//
// Created by 33695 on 25/10/2023.
//
#include <stdio.h>

#include "manip_fichiers_txt.h"
#include "manip_affichage_console.h"
#include "Structures.h"

void write_fichier_plateau_Niveau1(){
    if(remove("Niveau1_vide.txt")==0){
        printf("Delete successful.\n");
    }
    else{
        printf("Erreur de suppression");
    }
    FILE * pF = fopen("Niveau1_vide.txt","w");
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",9,0,0,0,0,0,0,0,0,0,4,0,0,0,0,0,0,4,0,9);
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",4,1,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,4,1,1);
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",0,0,4,0,4,0,0,0,0,2,0,2,0,0,0,0,0,4,0,0);
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",0,0,4,0,4,0,0,0,2,0,0,0,2,0,0,0,0,2,0,0);
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",4,4,4,0,4,4,0,2,0,0,7,0,0,2,0,0,0,4,4,4);
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",0,0,4,0,0,0,0,2,0,0,0,0,0,2,0,0,0,4,0,0);
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",0,0,4,0,4,4,0,0,2,0,0,0,2,0,0,0,0,4,0,0);
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",0,4,0,4,0,0,0,0,0,2,0,2,0,0,4,4,2,4,0,0);
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",1,1,2,4,0,0,8,0,0,0,2,0,0,0,4,0,0,1,0,0);
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",9,0,2,0,0,0,0,0,0,0,4,0,0,0,4,0,0,0,0,9);
    fclose(pF);
}

void write_fichier_plateau_Niveau2(){
    if(remove("Niveau2_vide.txt")==0){
        printf("Delete successful.\n");
    }
    else{
        printf("Erreur de suppression");
    }
    FILE * pF = fopen("Niveau2_vide.txt","w");
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9);
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9);
    fclose(pF);
}

void write_fichier_plateau_Niveau3(){
    if(remove("Niveau3_vide.txt")==0){
        printf("Delete successful.\n");
    }
    else{
        printf("Erreur de suppression");
    }
    FILE * pF = fopen("Niveau3_vide.txt","w");
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9);
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9);
    fclose(pF);
}

void write_fichier_plateau_Niveau4(){
    if(remove("Niveau4_vide.txt")==0){
        printf("Delete successful.\n");
    }
    else{
        printf("Erreur de suppression");
    }
    FILE * pF = fopen("Niveau4_vide.txt","w");
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9);
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9);
    fclose(pF);
}

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

void affiche_plateau_entier(Plateau * ptPlateau){
    printf("\n");
    for(char i=0;i<10;i++){
        for(char j=0;j<20;j++){
            printf("%c",ptPlateau->maMatrice[i][j]);
        }
        printf("\n");
    }
}

void clear_console(){
    goto_ligne_colonne(-1,-1);
    for(int i=0;i<50;i++){
        printf("                                                               \n");
    }
}