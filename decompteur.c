//
// Created by frank on 11/18/2023.
//
#include <stdio.h>
#include <time.h>

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