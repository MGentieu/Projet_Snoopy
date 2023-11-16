//
// Created by 33695 on 25/10/2023.
//

#ifndef PROJET_SNOOPY_STRUCTURES_H
#define PROJET_SNOOPY_STRUCTURES_H

#define STRING_MAX_LENGTH 30

typedef struct Plateau{
    char maMatrice[10][20]; // Matrice d'entiers allant de 0 à 9. donc on peut utiliser char[][].
}Plateau;

typedef struct Chaine{
    char myStr[STRING_MAX_LENGTH];
}Chaine;

int compare_mots_de_passe(Chaine *, Chaine *);

#endif //PROJET_SNOOPY_STRUCTURES_H
