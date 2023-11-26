//
// Created by frank on 11/25/2023.
//
#include <stdio.h>
#include <Windows.h>

void affichage_option_3(){
    char score[100];
    FILE *fichier_score = fopen("scores.txt", "r");
    if (fichier_score != NULL) {
        fgets(score, sizeof(score), fichier_score);
        fclose(fichier_score);
    }
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN| FOREGROUND_INTENSITY);
    printf(R"EOF(    ___     ___     ___     ___     ___     ___            ,-~~-.___.
  / __|   / __|   / _ \   | _ \   | __|   / __|           / |  '     \
  \__ \  | (__   | (_) |  |   /   | _|    \__ \          (  )         0
  |___/   \___|   \___/   |_|_\   |___|   |___/          \_/-, ,----'
_|"""""|_|"""""|_|"""""|_|"""""|_|"""""|_|"""""|            ====           //
"`-0-0-'"`-0-0-'"`-0-0-'"`-0-0-'"`-0-0-'"`-0-0-'            /  \-'~;    /~~~(O)
)EOF");
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN| FOREGROUND_BLUE| FOREGROUND_INTENSITY);
    printf("\n\n");
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    printf("%s\n", score);

}