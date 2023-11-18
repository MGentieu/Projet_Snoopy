#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
    char tab[10][10];
    char key = ‘p’;
    FILE *console = fopen("CONOUT$", "w");
    if (console == NULL){
        printf("Erreur lors de l'ouverture de la console externe.\n");
        return 1;
    }
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            fprintf(console,"o");
        }
        fprintf(console,"\n");
    }
    while (key != ’p’){
        if (kbhit()){
            key = getch() ;
            switch(key){
                case 'q':

                    fprintf('s');
            }
        }
    }

    fclose(console);

    return 0;
}