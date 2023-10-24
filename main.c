#include <stdio.h>
#include "saisie_clavier.h"

int main() {
    int n=0;
    float f=0.0;
    printf("Saisir un entier :");
    saisie_entier_utilisateur(&n);
    printf("\nSaisir un floatant :");
    saisie_float_utilisateur(&f);

    printf("entier = %d, floatant = %.2f\n", n, f);

    return 0;
}
