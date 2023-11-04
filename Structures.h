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

//Caractère 1 bloc cassable pique : 0x06
//Caractère 2 bloc poussable :
//  vers la gauche : 0x1B
//  vers la droite : 0x1A
//  vers le haut : 0x18
//  vers le bas : 0x19
//Caractère 3 bloc piégé trèfle : 0x05
//Caractère 4 bloc invincible : 0xDC
//Caractère 5 Bloc disparition/apparition : 0x0F
//Caractère 6 Bloc à pousser : 0xC4
//Caractère 7 Snoopy : 0x02
//Caractère 8 balle (signe mâle) : 0x0B
// Caractère 9 oiseau (musique) : 0x0E

#endif //PROJET_SNOOPY_STRUCTURES_H
