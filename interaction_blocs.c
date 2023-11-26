//
// Created by frank on 11/25/2023.
//
#include "Structures.h"

void bloc_intermitant(Plateau* ptPlateau, int etat){
    for(int i = 0; i< 10; i++){
        for(int j = 0 ; j< 20; j++){
                if(ptPlateau->maMatrice[i][j]=='5' && etat == 3){
                    ptPlateau->maMatrice[i][j] = '2' ;
                }
                else if(ptPlateau->maMatrice[i][j]== '2' && etat == 6){
                    ptPlateau->maMatrice[i][j] = '5' ;
                }
        }
    }
}

void bloc_cassable(Plateau* ptPlateau){
    if(ptPlateau->maMatrice[ptPlateau->Y_Snoopy][ptPlateau->X_Snoopy+1]=='1'){
        ptPlateau->maMatrice[ptPlateau->Y_Snoopy][ptPlateau->X_Snoopy+1]='0';
    }
    else if (ptPlateau->maMatrice[ptPlateau->Y_Snoopy][ptPlateau->X_Snoopy-1]=='1'){
        ptPlateau->maMatrice[ptPlateau->Y_Snoopy][ptPlateau->X_Snoopy-1]='0';
    }
    else if (ptPlateau->maMatrice[ptPlateau->Y_Snoopy+1][ptPlateau->X_Snoopy]=='1'){
        ptPlateau->maMatrice[ptPlateau->Y_Snoopy+1][ptPlateau->X_Snoopy]='0';
    }
    else if (ptPlateau->maMatrice[ptPlateau->Y_Snoopy-1][ptPlateau->X_Snoopy]=='1'){
        ptPlateau->maMatrice[ptPlateau->Y_Snoopy-1][ptPlateau->X_Snoopy]='0';
    }
}