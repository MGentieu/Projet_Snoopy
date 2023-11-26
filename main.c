#include <stdio.h>
#include <stdlib.h>
#include "Chargement_Niveaux.h"
#include "saisie_clavier.h"
#include "gestion_du_temps.h"
#include "manip_affichage_console.h"
#include "manip_fichiers_txt.h"
#include "Gestion_du_jeu.h"
#include <conio.h>
#include "Gestion_des_sauvegardes.h"
#include "Windows.h"

int main() {
    HWND console = GetConsoleWindow();
    if (console != NULL) {
        ShowWindow(console, SW_MAXIMIZE); // Maximiser la fenêtre de la console
    }

    //creer_fichier_scores();
    //On écrit dans des fichiers .txt les infos de bases concernant les niveaux.
    write_fichier_plateau_Niveau1();
    write_fichier_plateau_Niveau2();
    write_fichier_plateau_Niveau3();
    write_fichier_plateau_Niveau4();
    write_mots_de_passe();
    system("cls");

    int n=1;
    ecran_lancement();
    do{
        n=menu();
    }while(n==1);
    system("cls");

    return 0;
}
