//
// Created by 33695 on 19/11/2023.
//
#include "Structures.h"

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