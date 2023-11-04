#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <conio.h>

#include "saisie_clavier.h"
#include "gestion_du_temps.h"
#include "manip_affichage_console.h"
#include "manip_fichiers_txt.h"

int main() {

    write_fichier_plateau_Niveau1();
    write_fichier_plateau_Niveau2();
    write_fichier_plateau_Niveau3();
    write_fichier_plateau_Niveau4();

    Plateau p;
    charge_plateau_Niveau1_depart(&p);
    //goto_ligne_colonne(0,5);
    affiche_plateau_entier(&p);
    system("pause");

    system("cls");
    system("pause");
    goto_ligne_colonne(0,5);
    for(int i=0;i<10;i++){
        printf("%c",0x01);
    }

    /*
    printf("%c,%c,%c,%c\n",0x1B,0x1A,0x18,0x19);
    printf("%c,%c,%c,%c\n",0x06,0x05,0xDB,0x0F);
    printf("%c,%c,%c,%c\n",0x06,0x05,0x05,0x0F);
    printf("%c,%c,%c,%c\n",0x06,0x05,0xDB,0x0F);
    printf("%c,%c,%c,%c\n",0x06,0x05,0xDB,0x0F);
    printf("%c,%c,%c,%c\n",0xC4,0x02,0x0B,0x0E);

    int n=1;
    do{
        n=menu();
    }while(n==1);
    */






    ////////////////////////////////////////////////// MARTIN AU DESSUS : FRANKLIN EN DESSOUS









    ////////////////////////////////////////////////// FRANKLIN AU DESSUS : KEETHAN EN DESSOUS











    ////////////////////////////////////////////////// KEETHAN AU DESSUS : VALERE EN DESSOUS











    return 0;
}
