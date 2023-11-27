//
// Created by 33695 on 05/11/2023.
//
#include <stdio.h>
#include "manip_fichiers_txt.h"

void write_fichier_plateau_Niveau1(){
    if(remove("Niveau1_vide.txt")==0){
        printf("Delete successful.\n");
    }
    else{
        printf("Erreur de suppression");
    }
    FILE * pF = fopen("Niveau1_vide.txt","w");
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",9,0,0,0,0,0,0,0,0,0,4,0,0,0,0,0,0,4,0,9);
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",4,1,0,0,0,0,0,0,0,0,6,0,0,0,0,0,0,4,1,1);
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",0,0,4,0,4,0,0,0,0,6,0,6,0,0,0,0,0,4,0,0);
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",0,0,4,0,4,0,0,0,6,0,1,0,6,0,0,0,0,6,0,0);
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",4,4,4,0,4,4,0,6,0,1,7,1,0,6,0,0,0,4,4,4);
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",0,0,4,0,0,0,0,6,0,0,1,0,0,6,0,0,0,4,0,0);
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",0,0,4,0,4,4,0,0,6,0,0,0,6,0,0,0,0,4,0,0);
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",0,4,0,4,0,0,0,0,0,6,0,6,0,0,4,4,6,4,0,0);
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",1,1,6,4,0,0,8,0,0,0,6,0,0,0,4,0,0,1,0,0);
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",9,0,6,0,0,0,0,0,0,0,4,0,0,0,4,0,0,0,0,9);
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
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,4,9);
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",5,5,5,3,0,0,0,3,0,0,0,0,0,0,0,0,0,6,1,1);
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,6,4);
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",1,1,6,0,0,0,0,0,0,0,0,0,3,0,0,0,1,0,0,0);
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",7,1,0,5,5,5,3,0,0,0,0,0,0,0,0,0,0,6,1,0);
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",1,1,6,0,1,5,3,4,5,6,0,8,9,0,3,0,0,1,6,0);
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",4,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",0,0,3,0,0,0,0,0,0,0,0,0,3,0,0,5,5,5,0,4);
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",5,5,0,0,0,0,0,0,0,0,5,5,0,0,6,4,6,0,0,4);
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",9,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,3,0,0,9);
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
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",9,1,5,0,5,0,0,0,0,0,0,0,0,0,0,0,0,5,1,9);
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",1,0,5,0,5,0,3,0,0,0,3,0,0,0,5,5,5,0,0,0);
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",5,5,5,0,5,0,0,0,5,5,5,5,5,0,0,0,0,3,4,4);
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",0,0,0,0,5,0,0,0,5,0,0,0,5,0,0,0,0,0,0,0);
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",5,5,5,5,5,0,0,0,5,0,7,0,5,0,0,0,0,0,0,0);
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",0,0,0,0,0,3,0,0,5,0,0,0,5,0,0,5,5,5,5,5);
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",0,0,3,0,0,0,0,0,5,5,5,5,5,0,0,5,0,0,0,0);
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",4,4,4,1,0,0,0,0,0,0,3,0,0,0,0,5,0,5,5,5);
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",0,0,6,6,0,0,0,8,0,0,0,0,0,0,0,5,0,5,0,0);
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",9,0,4,1,0,0,0,0,0,0,0,0,0,0,0,5,0,5,0,9);
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
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",9,0,5,0,0,4,0,6,0,5,0,5,5,0,1,1,0,1,5,9);
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",5,5,0,0,0,0,0,0,6,0,4,0,0,0,1,1,0,0,5,5);
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",0,0,3,0,5,5,5,0,0,0,4,5,5,5,0,0,5,5,3,0);
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",0,0,0,0,0,0,0,3,4,0,4,0,0,0,3,0,0,0,0,0);
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",4,4,4,4,0,0,0,0,4,0,0,0,0,0,0,0,5,0,0,0);
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",7,5,5,5,3,0,0,0,3,0,3,0,0,0,0,4,0,4,4,5);
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",4,4,0,0,0,5,0,8,4,4,4,4,0,0,0,0,4,0,0,0);
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",0,6,6,4,0,5,5,5,5,5,0,4,3,0,0,6,0,1,1,1);
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",1,1,0,4,0,4,0,0,0,0,0,0,0,4,4,0,4,0,0,5);
    fprintf(pF,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",9,0,0,0,0,0,4,0,3,0,1,1,5,0,5,5,5,3,0,9);
    fclose(pF);
}

void write_mots_de_passe(){
    if(remove("mots_de_passe.txt")==0){
        printf("Delete successful.\n");
    }
    else{
        printf("Erreur de suppression");
    }

    FILE * pF = fopen("mots_de_passe.txt","w");
    fprintf(pF,"Valere1\n");
    fprintf(pF,"Keethan2\n");
    fprintf(pF,"Franklin3\n");
    fprintf(pF,"Martin4\n");
    fclose(pF);
}