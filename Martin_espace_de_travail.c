//
// Created by 33695 on 25/10/2023.
//
#include <stdio.h>
#include <stdlib.h>
#include "saisie_clavier.h"
#include "manip_fichiers_txt.h"
#include "manip_affichage_console.h"
#include "Structures.h"
#include "Chargement_Niveaux.h"

int compare_mots_de_passe(Chaine * maChaine, Chaine * mdp){
    int i=0;
    while(maChaine->myStr[i]!='\0'&&maChaine->myStr[i]!='\n'&&mdp->myStr[i]!='\0'&&mdp->myStr[i]!='\n'){
        if(maChaine->myStr[i]!=mdp->myStr[i]){
            return 0;
        }
        i++;
    }
    if((maChaine->myStr[i]=='\0'&&mdp->myStr[i]=='\n')||(maChaine->myStr[i]=='\n'&&mdp->myStr[i]=='\0')){
        return 0;
    }
    if(maChaine->myStr[i]!=mdp->myStr[i]){
        return 0;
    }
    return 1;
}

void option4(){
    Chaine mdp1;
    Chaine mdp2;
    Chaine mdp3;
    Chaine mdp4;
    Chaine mdp_lu;
    Plateau p1;
    read_mots_de_passe(&mdp1, &mdp2, &mdp3, &mdp4);
    printf("%s\n",mdp1.myStr);
    printf("%s\n",mdp2.myStr);
    printf("%s\n",mdp3.myStr);
    printf("%s\n",mdp4.myStr);
    int n=0;
    do{
        printf("Selectionnez le niveau que vous voulez charger, de 1 a 4 :\n");
        saisie_entier_utilisateur(&n);

    }while(n<1||n>4);
    printf("Saisissez le mot de passe du niveau %d:\n",n);
    saisie_chaine_utilisateur(&mdp_lu);
    switch(n){
        case 1:
            if(compare_mots_de_passe(&mdp_lu,&mdp1)){
                printf("Vous lancez le niveau 1.\n");
                charge_plateau_Niveau1_depart(&p1);
                affiche_plateau_entier(&p1);
            }
            else{
                printf("Pas de chargement 1.\n");
            }
            break;
        case 2:
            if(compare_mots_de_passe(&mdp_lu,&mdp2)){
                printf("Vous lancez le niveau 2.\n");
            }
            else{
                printf("Pas de chargement 2.\n");
            }
            break;
        case 3:
            if(compare_mots_de_passe(&mdp_lu,&mdp3)){
                printf("Vous lancez le niveau 3.\n");
            }
            else{
                printf("Pas de chargement 3.\n");
            }
            break;
        case 4:
            if(compare_mots_de_passe(&mdp_lu,&mdp4)){
                printf("Vous lancez le niveau 4.\n");
            }
            else{
                printf("Pas de chargement 4.\n");
            }
            break;
        default:
            break;

    }
}


