//
// Created by 33695 on 24/10/2023.
//
#include <windows.h>
#include "manip_affichage_console.h"

void goto_ligne_colonne(short ligne,short colonne){
    COORD mycoord;
    mycoord.X = ligne;
    mycoord.Y = colonne;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),mycoord);
}