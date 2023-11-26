//
// Created by 33695 on 24/10/2023.
//

#ifndef PROJET_SNOOPY_MANIP_FICHIERS_TXT_H
#define PROJET_SNOOPY_MANIP_FICHIERS_TXT_H

#include "Structures.h"

void creer_fichier_scores();
void append_fichier_scores(Plateau *);

void write_fichier_plateau_Niveau1();
void write_fichier_plateau_Niveau2();
void write_fichier_plateau_Niveau3();
void write_fichier_plateau_Niveau4();

void charge_plateau_Niveau1_depart(Plateau *);
void charge_plateau_Niveau2_depart(Plateau *);
void charge_plateau_Niveau3_depart(Plateau *);
void charge_plateau_Niveau4_depart(Plateau *);

void affiche_plateau_entier(Plateau *);
void affiche_plateau_entier_simple(Plateau *);

void write_mots_de_passe();
void read_mots_de_passe(Chaine *, Chaine *,Chaine *, Chaine *);
void read_un_mot(char []);

#endif //PROJET_SNOOPY_MANIP_FICHIERS_TXT_H
