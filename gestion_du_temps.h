//
// Created by 33695 on 24/10/2023.
//

#ifndef PROJET_SNOOPY_GESTION_DU_TEMPS_H
#define PROJET_SNOOPY_GESTION_DU_TEMPS_H

#include <time.h>
#include "Structures.h"
// Fonction qui charge une première valeur de temps
void init_compteur(long long *,time_t *);
void affiche_temps(int);
int decompte();
int decompte_corrige(int *, long long *,time_t *,Plateau *);
int dir_balle(Plateau * ptPlateau);
void bloc_intermitant(Plateau* ptPlateau, int etat);

#endif //PROJET_SNOOPY_GESTION_DU_TEMPS_H
