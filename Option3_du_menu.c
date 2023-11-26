//
// Created by frank on 11/25/2023.
//
#include <stdio.h>
#include "manip_fichiers_txt.h"
#include <Windows.h>
#include "Structures.h"

void creer_fichier_scores() {
    FILE *pF = fopen("scores.bin", "wb");
    if (pF != NULL) {
        fclose(pF);
    } else {
        printf("Erreur lors de la création du fichier.\n");
    }
}

void append_fichier_scores(Plateau *ptPlateau) {
    FILE *pF = fopen("scores.bin", "ab");
    if (pF != NULL) {
        fwrite(&ptPlateau->nom_joueur,50, 1, pF);
        fwrite(&ptPlateau->score,sizeof(unsigned int), 1, pF);
        fclose(pF);
    } else {
        printf("Erreur lors de l'ouverture du fichier.\n");
    }
}

void affichage_option_3(){

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN| FOREGROUND_INTENSITY);
    printf("    ___     ___     ___     ___     ___     ___            ,-~~-.___.\n");
    printf("  / __|   / __|   / _ \\   | _ \\   | __|   / __|           / |  '     \\\n");
    printf("  \\__ \\  | (__   | (_) |  |   /   | _|    \\__ \\          (  )         0\n");
    printf("  |___/   \\___|   \\___/   |_|_\\   |___|   |___/          \\_/-, ,----'\n");
    printf("_|\"\"\"\"\"|_|\"\"\"\"\"|_|\"\"\"\"\"|_|\"\"\"\"\"|_|\"\"\"\"\"|_|\"\"\"\"\"|            ====           //\n");
    printf("\"`-0-0-'\"`-0-0-'\"`-0-0-'\"`-0-0-'\"`-0-0-'\"`-0-0-'            /  \\-'~;    /~~~(O)\n");
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN| FOREGROUND_BLUE| FOREGROUND_INTENSITY);
    printf("\n\n");
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);



    FILE *fichier_score = fopen("scores.bin", "rb");
    if (fichier_score == NULL) {
        printf("Erreur d'ouverture du fichier...\n");
    } else {
        while (!feof(fichier_score)) {
            int score;
            char nom_joueur[50];
            fread(nom_joueur, sizeof(char), 50, fichier_score);
            fread(&score, sizeof(int), 1, fichier_score);
            printf("Nom du joueur : %s\nScore : %d\n", nom_joueur, score);
        }
        fclose(fichier_score);
    }
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN| FOREGROUND_BLUE| FOREGROUND_INTENSITY);
}