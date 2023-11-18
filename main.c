#include <stdio.h>
#include <stdlib.h>
#include "Chargement_Niveaux.h"
#include "saisie_clavier.h"
#include "gestion_du_temps.h"
#include "manip_affichage_console.h"
#include "manip_fichiers_txt.h"
#include <conio.h>


int main() {

    //On écrit dans des fichiers .txt les infos de bases concernant les niveaux.
    write_fichier_plateau_Niveau1();
    write_fichier_plateau_Niveau2();
    write_fichier_plateau_Niveau3();
    write_fichier_plateau_Niveau4();
    write_mots_de_passe();
    system("cls");


    int n=1;
    do{
        n=menu();
    }while(n==1);
    system("cls");

    /*
    Plateau p;
    charge_plateau_Niveau1_depart(&p);
    affiche_plateau_entier(&p);
    system("pause");
    goto_ligne_colonne(29,5);
    while(!kbhit()){}
    char c=(char)getch();
    printf("%c",c);
    goto_ligne_colonne(0,15);
    system("pause");
    system("cls");
    charge_plateau_Niveau1_depart(&p);
    affiche_plateau_entier(&p);
    system("pause");
    goto_ligne_colonne(29,5);
    while(!kbhit()){}
    c=(char)getch();
    printf("%c",c);
    goto_ligne_colonne(0,15);
    system("pause");
    */



    /*
    for(int i=0;i<128;i++){
        printf("%d : %c\n",i,i);
    }
    system("pause");
    */

    /*
    printf("%c,%c,%c,%c\n",0x1B,0x1A,0x18,0x19);
    printf("%c,%c,%c,%c\n",0x06,0x05,0xDB,0x0F);
    printf("%c,%c,%c,%c\n",0x06,0x05,0x05,0x0F);
    printf("%c,%c,%c,%c\n",0x06,0x05,0xDB,0x0F);
    printf("%c,%c,%c,%c\n",0x06,0x05,0xDB,0x0F);
    printf("%c,%c,%c,%c\n",0xC4,0x02,0x1F,0x13);
     */








    ////////////////////////////////////////////////// MARTIN AU DESSUS : FRANKLIN EN DESSOUS
    int time=120;
    decompteur(time);








    ////////////////////////////////////////////////// FRANKLIN AU DESSUS : KEETHAN EN DESSOUS











    ////////////////////////////////////////////////// KEETHAN AU DESSUS : VALERE EN DESSOUS











    return 0;
}
