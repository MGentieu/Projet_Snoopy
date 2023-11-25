//
// Created by frank on 11/25/2023.
//
#include <stdio.h>
#include <Windows.h>

void affichage_option_3(){
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN| FOREGROUND_INTENSITY);
    printf("  *******   ******   ******   ********    ********   *******\n");
    printf(" **       ***       **    **  **    **    **        **      \n");
    printf(" ***      **       *        * ***    **   ***       ***     \n");
    printf("   *****  **       *        * *** ****    ********    ***** \n");
    printf("      *** **       *        * **    ***   ***            ***\n");
    printf("       ** ***       **    **  **    ****  **              **\n");
    printf(" *******    ******   ******   **     **** ********  ******* \n\n\n\n");
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN| FOREGROUND_BLUE| FOREGROUND_INTENSITY);
    }