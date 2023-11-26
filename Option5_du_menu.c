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


void option5_menu(Plateau * ptPlateau, int * ptVerif, int * ptVerifGain){
    int choix_suppr_charge=0;
    do{
        printf("Saisissez 1 pour lire un fichier de sauvegarde\n"
               "2 pour en supprimer un :\n");
        saisie_entier_utilisateur(&choix_suppr_charge);
    }while(choix_suppr_charge!=1&&choix_suppr_charge!=2);
    if(choix_suppr_charge==2){
        suppr_fichier_de_sauvegarde();
        return;
    }
    if(!lire_fichier_de_sauvegarde(ptPlateau)){
        return;
    }
    affiche_plateau_entier(ptPlateau);
    jouer(ptPlateau,ptVerif,ptVerifGain);
    if(!*ptVerif){
        return;
    }
    ptPlateau->mode_de_jeu++;
    if(ptPlateau->mode_de_jeu==6){
        charge_plateau_Niveau2_depart(ptPlateau);
        affiche_plateau_entier(ptPlateau);
        jouer(ptPlateau,ptVerif,ptVerifGain);
        if(!*ptVerif){
            return;
        }
        ptPlateau->mode_de_jeu++;
    }
    if(ptPlateau->mode_de_jeu==7){
        charge_plateau_Niveau3_depart(ptPlateau);
        affiche_plateau_entier(ptPlateau);
        jouer(ptPlateau,ptVerif,ptVerifGain);
        if(!*ptVerif){
            return;
        }
        ptPlateau->mode_de_jeu++;
    }
    if(ptPlateau->mode_de_jeu==8){
        charge_plateau_Niveau2_depart(ptPlateau);
        affiche_plateau_entier(ptPlateau);
        jouer(ptPlateau,ptVerif,ptVerifGain);
        if(!*ptVerif){
            return;
        }
        ptPlateau->mode_de_jeu++;
    }
}
