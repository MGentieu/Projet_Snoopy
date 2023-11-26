//
// Created by frank on 11/23/2023.
//

#include <stdio.h>
#include <Windows.h>
void affichage_option_1(){
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
    printf(R"EOF(
   ___     ___     ___     _       ___     ___              ___    _   _                _    ___    _   _
  | _ \   | __|   / __|   | |     | __|   / __|     o O O  |   \  | | | |    o O O   _ | |  | __|  | | | |
  |   /   | _|   | (_ |   | |__   | _|    \__ \    o       | |) | | |_| |   o       | || |  | _|   | |_| |
  |_|_\   |___|   \___|   |____|  |___|   |___/   TS__[O]  |___/   \___/   TS__[O]  _\__/   |___|   \___/
_|"""""|_|"""""|_|"""""|_|"""""|_|"""""|_|"""""| {======|_|"""""|_|"""""| {======|_|"""""|_|"""""|_|"""""|
"`-0-0-'"`-0-0-'"`-0-0-'"`-0-0-'"`-0-0-'"`-0-0-'./o--000'"`-0-0-'"`-0-0-'./o--000'"`-0-0-'"`-0-0-'"`-0-0-'
)EOF");
    printf("\n\n");
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    printf("Bienvenu cher comp%ctiteur, aujourd'hui vous allez aider", 130);
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    printf(" Snoopy");
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    printf("!\n\n");
    printf("En effet, apr%cs s'%ctre fait vol%c son gouter par", 138, 136, 130);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    printf(" Babouche Le Vilain");
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    printf(", notre ami");
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    printf(" Snoopy");
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    printf(" souhaite se venger en volant les bananes de");
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    printf(" Babouche Le Vilain");
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    printf(" lors de sa sortie avec");
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    printf(" Dora");
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    printf(".\n");
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    printf("Babouche Le Vilain");
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    printf(" n'%ctant pas dupe, il a pi%cg%c sa maison %c l'aide d'une balle rebondissante pour freiner la progression de", 130, 130, 130, 133);
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    printf(" Snoopy");
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    printf(".\n");
    printf("Les bananes sont plac%ces aux quatres coins du niveau, r%ccup%crez-les avant le retour de", 130, 130, 130);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    printf(" Babouche Le Vilain");
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    printf("!\n\nSi");
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    printf(" Snoopy");
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    printf(" se fait touch%c par la balle, il se blesse et au bout de 3 fois,",130);
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    printf(" Snoopy");
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    printf(" %cclate en sanglots et alerte",130);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    printf(" Babouche Le Vilain");
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    printf(" de sa pr%csence.\n\n",130);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
    printf("Attention!");
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    printf(" Vous n'avez que 120 secondes pour voler les bananes de");
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    printf(" Babouche Le Vilain");
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    printf(" avant son retour... Faites vite!\n\n\n");
    SetConsoleTextAttribute(hConsole, FOREGROUND_INTENSITY);
    printf("TOUCHES DE JEU\n\n");
    SetConsoleTextAttribute(hConsole,FOREGROUND_GREEN| FOREGROUND_INTENSITY);
    printf("Avancer : ");
    SetConsoleTextAttribute(hConsole,FOREGROUND_RED| FOREGROUND_INTENSITY);
    printf("Z\t\t\t");
    SetConsoleTextAttribute(hConsole,FOREGROUND_GREEN| FOREGROUND_INTENSITY);
    printf("Quitter : ");
    SetConsoleTextAttribute(hConsole,FOREGROUND_RED| FOREGROUND_INTENSITY);
    printf("P\n");
    SetConsoleTextAttribute(hConsole,FOREGROUND_GREEN| FOREGROUND_INTENSITY);
    printf("Reculer : ");
    SetConsoleTextAttribute(hConsole,FOREGROUND_RED| FOREGROUND_INTENSITY);
    printf("S\t\t\t");
    SetConsoleTextAttribute(hConsole,FOREGROUND_GREEN| FOREGROUND_INTENSITY);
    printf("Pause : ");
    SetConsoleTextAttribute(hConsole,FOREGROUND_RED| FOREGROUND_INTENSITY);
    printf("K\n");
    SetConsoleTextAttribute(hConsole,FOREGROUND_GREEN| FOREGROUND_INTENSITY);
    printf("D%cplacement %c droite : ",130,133);
    SetConsoleTextAttribute(hConsole,FOREGROUND_RED| FOREGROUND_INTENSITY);
    printf("D\t");
    SetConsoleTextAttribute(hConsole,FOREGROUND_GREEN| FOREGROUND_INTENSITY);
    printf("Sauvegarde : ");
    SetConsoleTextAttribute(hConsole,FOREGROUND_RED| FOREGROUND_INTENSITY);
    printf("J\n");
    SetConsoleTextAttribute(hConsole,FOREGROUND_GREEN| FOREGROUND_INTENSITY);
    printf("D%cplacement %c gauche : ",130,133);
    SetConsoleTextAttribute(hConsole,FOREGROUND_RED| FOREGROUND_INTENSITY);
    printf("Q\t");
    SetConsoleTextAttribute(hConsole,FOREGROUND_GREEN| FOREGROUND_INTENSITY);
    printf("Casser les blocs: ",130,133);
    SetConsoleTextAttribute(hConsole,FOREGROUND_RED| FOREGROUND_INTENSITY);
    printf("B\t");
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE |  FOREGROUND_INTENSITY);
}