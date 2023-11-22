//
// Created by 33695 on 19/11/2023.
//
#include <stdio.h>
#include "Structures.h"

void saisie_nom_joueur(Plateau * ptPlateau){
    printf("Saisissez le nom du joueur.\n");
    fgets(ptPlateau->nom_joueur,50,stdin);
    fflush(stdin);

    int i=0;//On enlève le \n en plus donnée par fgets.
    while(ptPlateau->nom_joueur[i]!='\0'&&ptPlateau->nom_joueur[i]!='\n'){
        i++;
    }
    ptPlateau->nom_joueur[i]='\0';

}
void initialisation_plateau_scores(Plateau * ptPlateau){
    ptPlateau->score=0;
}

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