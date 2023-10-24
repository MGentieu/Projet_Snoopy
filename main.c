#include <stdio.h>

#include "saisie_clavier.h"
#include "gestion_du_temps.h"
#include "manip_affichage_console.h"

int main() {


    Chaine tab;
    //printf("taille du tableau : %d\n",sizeof(tab));

    saisie_chaine_utilisateur(&tab);
    printf("%s\n",tab.myStr);
    char a;
    char b;
    char c;
    saisie_caractere_utilisateur(&a);
    saisie_caractere_utilisateur(&b);
    saisie_caractere_utilisateur(&c);
    printf("%c, %c, %c\n",a,b,c);
    int n1=0;
    int n2=0;
    float f1=0.0;
    float f2=0.0;
    saisie_entier_utilisateur(&n1);
    saisie_entier_utilisateur(&n2);
    saisie_float_utilisateur(&f1);
    saisie_float_utilisateur(&f2);
    printf("%d, %d, %.2f, %.2f\n",n1,n2,f1,f2);
    printf("babaistou");

    /*int n=1;
    do{
        n=menu();
    }while(n==1);*/







    ////////////////////////////////////////////////// MARTIN AU DESSUS : FRANKLIN EN DESSOUS









    ////////////////////////////////////////////////// FRANKLIN AU DESSUS : KEETHAN EN DESSOUS











    ////////////////////////////////////////////////// KEETHAN AU DESSUS : VALERE EN DESSOUS











    return 0;
}
