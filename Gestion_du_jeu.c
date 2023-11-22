//
// Created by 33695 on 22/11/2023.
//

#include <stdio.h>
#include <Windows.h>
#include <conio.h>

#include "Gestion_du_jeu.h"
#include "Gestion_des_sauvegardes.h"
#include "Structures.h"

void jouer(Plateau * ptPlateau,int * ptVerif){
    char entree='0';
    do{
        while(!kbhit()){
            //Instruction de gestion du temps.
        }
        entree=(char)getch();
        switch(entree){
            case 'm':
                sauvegarder_fichier(ptPlateau);
                *ptVerif=0;
                break;
            case 'l':
                *ptVerif=0;
                break;
            case 'c':
                //Continue. Juste un test.
                break;
        }
    }while(*ptVerif&&entree!='c');
    system("cls");
}