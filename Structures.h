//
// Created by 33695 on 25/10/2023.
//

#ifndef PROJET_SNOOPY_STRUCTURES_H
#define PROJET_SNOOPY_STRUCTURES_H

#define STRING_MAX_LENGTH 30

typedef struct Plateau{
    char maMatrice[10][20]; // Matrice d'entiers allant de 0 à 9. donc on peut utiliser char[][].
    char nom_joueur[50];
    unsigned int score;
    int temps_restant;
    unsigned char direction_snoopy; ///Pour savoir où Snoopy regarde, et donc s'il peut interagir avec ce qui est devant.
    unsigned char X_Snoopy;
    unsigned char Y_Snoopy;
    char avant_snoopy;
    unsigned char direction_balle;
    unsigned char X_Balle;
    unsigned char Y_Balle;
    char avant_balle;
    unsigned char direction_balle2;
    unsigned char X_Balle2;
    unsigned char Y_Balle2;
    bool coli_h1;
    bool coli_b1;
    bool coli_g1;
    bool coli_d1;
    bool coli_h2;
    bool coli_b2;
    bool coli_g2;
    bool coli_d2;
    unsigned char nb_oiseaux_restants;
    unsigned char mode_de_jeu; ///Pour savoir si on fait une partie complète ou un niveau simple, et à quel niveau on est.
    char nb_de_vies;
}Plateau;

typedef struct Chaine{
    char myStr[STRING_MAX_LENGTH];
}Chaine;

int compare_mots_de_passe(Chaine *, Chaine *);
void saisie_nom_joueur(Plateau *);
void initialisation_plateau_scores(Plateau *);

#endif //PROJET_SNOOPY_STRUCTURES_H
