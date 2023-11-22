#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int movesnoopy() {
    char key= '';
    while (key !='l'){
        if (kbhit()){
            key = getch() ;
            switch(key){
                case 'z':
                    break;
                case 'q':
                    break;
                case 's':
                    break;
                case 'd':
                    break;
            }
        }
    }

    return 0;
}