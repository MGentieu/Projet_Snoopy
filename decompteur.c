//
// Created by frank on 11/18/2023.
//

#include <stdio.h>
#include <time.h>
#include "gestion_du_temps.h"
#include "manip_affichage_console.h"

int decompte()
{
    int dec = 120;
    int stock[1];
    time_t timer; // entier de type time_t qui stocke le temps système en secondes
    stock[0]=time(&timer);
    while(dec!=-1){
        if(time(&timer)>stock[0]){
            stock[0]=time(&timer);
            printf("\t%d", dec);
            dec-=1;
        }
    }
    return 0;
}

void init_compteur(long long *ptStock,time_t * ptTimer){
    *ptStock=time(ptTimer);
}

void affiche_temps(int dec){
    goto_ligne_colonne(20,11);
    printf("%3d",dec);
}

void decompte_corrige(int *ptDec, long long *ptStock, time_t * ptTimer){
    //time_t timer;
    long long temps=time(ptTimer);
    if(temps>*ptStock){
        *ptStock=temps;
        //printf("%d\n",*ptDec);
        if(*ptDec>0){
            (*ptDec)--;
        }
        affiche_temps(*ptDec);
    }
}