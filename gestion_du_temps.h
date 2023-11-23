//
// Created by 33695 on 24/10/2023.
//

#ifndef PROJET_SNOOPY_GESTION_DU_TEMPS_H
#define PROJET_SNOOPY_GESTION_DU_TEMPS_H

#include <time.h>

int decompte();
void init_compteur(long long *,time_t *);
void affiche_temps(int);
void decompte_corrige(int *, long long *,time_t *);

#endif //PROJET_SNOOPY_GESTION_DU_TEMPS_H
