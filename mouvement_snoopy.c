#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include "Manip_affichage_console.h"
#include "Structures.h"

void gotoligcol( int lig, int col )
{
    COORD mycoord;
    mycoord.X  = col;
    mycoord.Y  = lig;
    SetConsoleCursorPosition( GetStdHandle( STD_OUTPUT_HANDLE ), mycoord );
}

int movesnoopy(Plateau *ptPlateau) {
    short x=ptPlateau->X_Snoopy, y=ptPlateau->Y_Snoopy, dx, dy;
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
        gotoligcol(4*xavt,yavt);
        printf(" ");
        //On affiche Snoopy après son déplacement :
        gotoligcol(4*x,y);
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