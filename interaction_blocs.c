//
// Created by frank on 11/25/2023.
//
#include "Structures.h"
#include "manip_affichage_console.h"
#include<stdio.h>
void bloc_intermitant(Plateau* ptPlateau, int etat){
    for(int i = 0; i< 10; i++){
        for(int j = 0 ; j< 20; j++){
                if(ptPlateau->maMatrice[i][j]=='5' && etat == 2){
                    ptPlateau->maMatrice[i][j] = '2' ;
                }
                else if(ptPlateau->maMatrice[i][j]== '2' && etat == 4){
                    ptPlateau->maMatrice[i][j] = '5' ;
                }
        }
    }
}
// vraigotoligcol(ptPlateau->Y_Snoopy,ptPlateau->X_Snoopy+1);
//        printf("%c",' ');
void bloc_cassable(Plateau* ptPlateau){

    if(ptPlateau->maMatrice[ptPlateau->X_Snoopy+1][ptPlateau->Y_Snoopy]=='1'){
        ptPlateau->maMatrice[ptPlateau->X_Snoopy+1][ptPlateau->Y_Snoopy]='0';
        vraigotoligcol(ptPlateau->X_Snoopy+1,ptPlateau->Y_Snoopy);
        printf("%c",' ');
    }
    if (ptPlateau->maMatrice[ptPlateau->X_Snoopy-1][ptPlateau->Y_Snoopy]=='1'){
        ptPlateau->maMatrice[ptPlateau->X_Snoopy-1][ptPlateau->Y_Snoopy]='0';
        vraigotoligcol(ptPlateau->X_Snoopy-1,ptPlateau->Y_Snoopy);
        printf("%c",' ');

}
    if (ptPlateau->maMatrice[ptPlateau->X_Snoopy][ptPlateau->Y_Snoopy+1]=='1'){
        ptPlateau->maMatrice[ptPlateau->X_Snoopy][ptPlateau->Y_Snoopy+1]='0';
        vraigotoligcol(ptPlateau->X_Snoopy,ptPlateau->Y_Snoopy+1);
        printf("%c",' ');

    }
    if (ptPlateau->maMatrice[ptPlateau->X_Snoopy][ptPlateau->Y_Snoopy-1]=='1'){
        ptPlateau->maMatrice[ptPlateau->X_Snoopy][ptPlateau->Y_Snoopy-1]='0';
        vraigotoligcol(ptPlateau->X_Snoopy,ptPlateau->Y_Snoopy-1);
        printf("%c",' ');
    }
}