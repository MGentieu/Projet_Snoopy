//
// Created by frank on 11/25/2023.
//
#include "Structures.h"

void bloc_intermitant(Plateau* ptPlateau, int etat){
    for(int i = 0; i< 10; i++){
        for(int j = 0 ; j< 20; j++){
                if(ptPlateau->maMatrice[i][j]=='5' && etat == 1){
                    ptPlateau->maMatrice[i][j] = '20' ;
                }
                else if(ptPlateau->maMatrice[i][j]== '20' && etat == 0){
                    ptPlateau->maMatrice[i][j] = '5' ;
                }
        }
    }
}