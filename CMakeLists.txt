cmake_minimum_required(VERSION 3.26)
project(Projet_Snoopy C)

set(CMAKE_C_STANDARD 23)

add_executable(Projet_Snoopy main.c
        saisie_clavier.h
        Saisie_clavier.c
        manip_fichiers_txt.h
        gestion_du_temps.h
        manip_affichage_console.h
        Manip_affichage_console.c
        Menu.c
        Martin_espace_de_travail.c
        Structures.h
        Ecriture_fichiers_txt.c
        Lecture_fichiers_txt.c
        Chargement_Niveaux.h
        Gestion_du_temps.c
        Option4_du_menu.c
        Gestion_des_sauvegardes.c
        Gestion_des_sauvegardes.h
        Gestion_du_jeu.h
        Gestion_du_jeu.c
        Option1_du_menu.c
        Option5_du_menu.c
        balle.c
        interaction_blocs.c
        Option3_du_menu.c
)
