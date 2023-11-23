#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include "manip_affichage_console.h"

int movesnoopy() {
    short x, y, dx, dy;
    short xavt, yavt;
    char key= '0';
    do{
        xavt=x;
        yavt=y;
        //Gérons maintenant les problèmes de bordure :
        if(x>20) x=20;
        if(y>10) y=10;
        if(x<0) x=0;
        if(y<0) y=0;
        //Gérons maintenant l'affichage de Snoopy:
        //Premièrement, on supprime l'affichage de Snoopy :
        goto_ligne_colonne(xavt,yavt);
        printf(" ");
        //On affiche Snoopy après son déplacement :
        goto_ligne_colonne(x,y);
        printf("%c",0x02);
        //On note maintenant la valeur de la touche appuyée par le joueur :
        if (kbhit()){
            key = getch() ;
            switch(key){
                case 'z': dx=0;dy=1;
                    break;
                case 'q': dx=-1;dy=0;
                    break;
                case 's': dx=0;dy=-1;
                    break;
                case 'd': dx=1;dy=0;
                    break;
            }
        }
    }while (key !='l');
    return 0;
}