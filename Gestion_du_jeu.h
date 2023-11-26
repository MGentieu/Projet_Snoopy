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
int verif_collisions(Plateau *,unsigned char, unsigned char);
int verif_banane(Plateau * ptPlateau,unsigned char X_test, unsigned char Y_test);
void up_score_car_niveau_fini(Plateau *);
int verif_fin_niveau(Plateau *);
void verif_bloc_pieges(Plateau *, unsigned char, unsigned char);
// Fonction qui verifie si les blocs collant snoopy sont cassable et les cassent quand 'b' est exécuté
void bloc_cassable(Plateau* ptPlateau);
// Fonction balle qui prend en arguments le pointeur plateau, verifie les collisions et redirige la balle en fonctions des collisions Modification matricielle et console
void balle(Plateau *);
void balle2(Plateau *);
#endif //PROJET_SNOOPY_GESTION_DU_JEU_H
