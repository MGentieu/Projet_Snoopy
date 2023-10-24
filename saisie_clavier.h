//
// Created by 33695 on 24/10/2023.
//

#ifndef PROJET_SNOOPY_SAISIE_CLAVIER_H
#define PROJET_SNOOPY_SAISIE_CLAVIER_H

#define STRING_MAX_LENGTH 30

typedef struct Chaine{
    char myStr[STRING_MAX_LENGTH];
}Chaine;

void saisie_entier_utilisateur(int *);
void saisie_float_utilisateur(float *);
void saisie_chaine_utilisateur(Chaine *);
void saisie_caractere_utilisateur(char *);

#endif //PROJET_SNOOPY_SAISIE_CLAVIER_H
