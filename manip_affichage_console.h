//
// Created by 33695 on 24/10/2023.
//


#ifndef PROJET_SNOOPY_MANIP_AFFICHAGE_CONSOLE_H
#define PROJET_SNOOPY_MANIP_AFFICHAGE_CONSOLE_H

#include "Structures.h"

void goto_ligne_colonne(short,short);
void vraigotoligcol(unsigned char, unsigned char);
void affiche_char_selon_entier(char);
void affiche_char_selon_entier_simple(char);
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
//Caractère 8 balle (!!) : 0x0B
// Caractère 9 oiseau (musique) : 0x0E

void affiche_donnees_plateau_temps(Plateau *);
void affiche_donnees_plateau_nb_vies(Plateau *);
void affiche_donnees_plateau_score(Plateau *);

#endif //PROJET_SNOOPY_MANIP_AFFICHAGE_CONSOLE_H
