//
// Created by 33695 on 25/10/2023.
//
#include <stdio.h>
#include "manip_fichiers_txt.h"

void write_plateau_vide(){
    if(remove("Plateau_vide.txt")==0){
        printf("Delete successful.\n");
    }
    else{
        printf("Erreur de suppression");
    }
    FILE * pF = fopen("Plateau_vide.txt","w");
    fprintf(pF,"Bonjour");
    fclose(pF);
}