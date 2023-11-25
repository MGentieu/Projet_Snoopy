//
// Created by 33695 on 22/11/2023.
//

#ifndef PROJET_SNOOPY_GESTION_DU_JEU_H
#define PROJET_SNOOPY_GESTION_DU_JEU_H

#include "Structures.h"

void affiche_donnees_importantes();
void jouer(Plateau *,int *);
int verif_nb_de_vies(Plateau *);
void game_over();
int movesnoopy(Plateau *);

void balle(Plateau *);
#endif //PROJET_SNOOPY_GESTION_DU_JEU_H
