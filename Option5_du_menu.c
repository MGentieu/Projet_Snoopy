//
// Created by 33695 on 24/11/2023.
//
#include <stdio.h>
#include "Chargement_Niveaux.h"
#include "Gestion_des_sauvegardes.h"
#include "Structures.h"
#include "manip_affichage_console.h"
#include "manip_fichiers_txt.h"
#include "saisie_clavier.h"
#include "Chargement_Niveaux.h"
#include "Gestion_du_jeu.h"


void option5_menu(Plateau * ptPlateau){
    lire_fichier_de_sauvegarde(ptPlateau);
    affiche_plateau_entier(ptPlateau);
}
