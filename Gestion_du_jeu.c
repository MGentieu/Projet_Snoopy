//
// Created by 33695 on 22/11/2023.
//

#include <stdio.h>
#include <Windows.h>
#include <conio.h>
#include <time.h>
#include "Gestion_du_jeu.h"
#include "Gestion_des_sauvegardes.h"
#include "Structures.h"
#include "gestion_du_temps.h"

void jouer(Plateau * ptPlateau,int * ptVerif){
    char entree='0';
    int dec=120;
    long long stock=0;
    time_t timer;
    init_compteur(&stock,&timer);
    do{
        while(!kbhit()){
            //Instruction de gestion du temps.
            //decompte();
            decompte_corrige(&dec,&stock,&timer);
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