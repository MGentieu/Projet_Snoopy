//
// Created by 33695 on 22/11/2023.
//

#ifndef PROJET_SNOOPY_GESTION_DU_JEU_H
#define PROJET_SNOOPY_GESTION_DU_JEU_H

#include "Structures.h"
// fonction qui lance l'écran de lancement
void ecran_lancement();
void affiche_donnees_importantes();
void jouer(Plateau *,int *,int *);
int verif_nb_de_vies(Plateau *);
void win();
void game_over();
int verif_collisions(Plateau *,unsigned char, unsigned char);
int verif_banane(Plateau * ptPlateau,unsigned char X_test, unsigned char Y_test);
int verif_intermittant(Plateau *,unsigned char, unsigned char);
void up_score_car_niveau_fini(Plateau *);
int verif_fin_niveau(Plateau *);
void verif_bloc_pieges(Plateau *, unsigned char, unsigned char);
void verif_tous_les_blocs_pieges_pres_de_snoopy(Plateau *, unsigned char, unsigned char);
int verif_deplacement_vers_balle(Plateau *, unsigned char, unsigned char);
int verif_balle_est_sur_snoopy(Plateau *);
// Fonction qui verifie si les blocs collant snoopy sont cassable et les cassent quand 'b' est exécuté
void bloc_cassable(Plateau* ptPlateau);
// Fonction balle qui prend en arguments le pointeur plateau, verifie les collisions et redirige la balle en fonctions des collisions Modification matricielle et console
void balle(Plateau *);
void balle2(Plateau *);
#endif //PROJET_SNOOPY_GESTION_DU_JEU_H
