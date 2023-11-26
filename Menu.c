//
// Created by 33695 on 24/10/2023.
//
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include "Structures.h"
#include "manip_affichage_console.h"
#include "manip_fichiers_txt.h"
#include "saisie_clavier.h"
#include "Chargement_Niveaux.h"
#include "Gestion_du_jeu.h"

void ecran_lancement(){
    system("cls");
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED |FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    printf("                 __--XX-\n"
           "                                 ^XXXXX^^\n"
           "                             _-XXXX-^\n"
           "              XXX         --XXX^^                         ______          _      _     _____                               \n"
           "          XXXX   -XX_--VXXX^^                             | ___ \\        (_)    | |   /  ___|                              \n"
           "        XX      _-^ .=XX^                                 | |_/ / __ ___  _  ___| |_  \\ `--. _ __   ___   ___  _ __  _   _ \n"
           "      XX     _-^::XX^^^ XXX-_____     ___                 |  __/ '__/ _ \\| |/ _ \\ __|  `--. \\ '_ \\ / _ \\ / _ \\| '_ \\| | | |\n"
           "     X    _-^_-^                 ^^^^^   ^^XXXX           | |  | | | (_) | |  __/ |_  /\\__/ / | | | (_) | (_) | |_) | |_| |\n"
           "    X  _-^_-^                                  X          \\_|  |_|  \\___/| |\\___|\\__| \\____/|_| |_|\\___/ \\___/| .__/ \\__, |\n"
           "   X_-^_-^              .                       X                       _/ |                                  | |     __/ |\n"
           " --^_-^                .X                       X----                  |__/                                   |_|    |___/ \n"
           "-.-                    ^^                       XXXX -\n"
           " X                                              XXXX-");
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN |FOREGROUND_RED |FOREGROUND_BLUE | FOREGROUND_INTENSITY);
        printf("\t\t\tGENTIEU Martin\n");
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED |FOREGROUND_BLUE | FOREGROUND_INTENSITY);
        printf(
           " X                                              X");
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN |FOREGROUND_RED |FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    printf("\t\t\t\tPINTO DE ALMEIDA Franklin\n");
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED |FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    printf(
           " X                                              X");
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN |FOREGROUND_RED |FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    printf("\t\t\t\t\tSATHIYAMOORTHY Keethan\n");
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED |FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    printf(
           "X      XXX  XX                                 X");
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN |FOREGROUND_RED |FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    printf("\t\t\t\t\t\t\tDELIN Valere\n");
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED |FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    printf(
           "X     XXXXX  X                                X\n"
           "X    XXXXXXX  X                              X\n"
           "X   XXXXXXXXX X                            XX\n"
           "X  XXXXXXXXXXX X                       XXXX\n"
           " X XXXXXXXXXXX X                   XXXX\n"
           " X XXXXXXXXXXX XXX           XXXXXX\n"
           " X XXXXXXXXXXX X XX        XX\n"
           " X XXXXXXXXXXX X   X      X                   ___\n"
           " X  XXXXXXXXX X     X-XXXXX              __---   ------_\n"
           "  X  XXXXXXX X     ^---^  X           __- _---^^^----__ --_\n"
           "  X   XXXXX X       X      X        _- -'^.....   .....^'-_-_\n"
           "   XX-     XX      X .     XX    _-  _-....   .....   .....= =\n"
           "      XXXXX       X   X    X   _-  _-...   .....   .....   .= =\n"
           "                XX    X      XX  _-.   .....   .....   .....= =\n"
           "               X      X      X/XX....   .....   .....   ....= =\n"
           "              XXX      XXXXXX^  X   .....   .....   .....  _-_-\n"
           "             X   XX              /");
}
int menu(){
    //HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    //SetConsoleTextAttribute(hConsole, WHITENESS | FOREGROUND_INTENSITY);
    int choix = 0;
    int verif=1;
    int verif_gain_partie=0;
    system("pause");

    do {
        system("cls");
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
        printf(R"EOF( __  __    ___    _  _    _   _                     _.---,-..
|  \/  |  | __|  | \| |  | | | |                  ,'    )(__)\__
| |\/| |  | _|   | .` |  | |_| |                  /  ,-.',<..-'  `._
|_|__|_|  |___|  |_|\_|   \___/                  :  |  |' /       (_)
_|"""""|_|"""""|_|"""""|_|"""""|                 |  `-'  (        /
"`-0-0-'"`-0-0-'"`-0-0-'"`-0-0-'                  `.._    >-----''
)EOF");
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED |FOREGROUND_BLUE |FOREGROUND_GREEN| FOREGROUND_INTENSITY);
        printf("1. Livret de regles.");
        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
        printf("\t\t\t           _..).-(\n");
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED |FOREGROUND_BLUE |FOREGROUND_GREEN| FOREGROUND_INTENSITY);
        printf("2. Commencer une nouvelle partie.");
        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
        printf("\t     ,-._,'_.;.--':   _\n");
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED |FOREGROUND_BLUE |FOREGROUND_GREEN| FOREGROUND_INTENSITY);
        printf("3. Afficher les scores.");
        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
        printf("\t\t\t__.-' ,._,' /  _.,'.(( ,-.\n");
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED |FOREGROUND_BLUE |FOREGROUND_GREEN| FOREGROUND_INTENSITY);
        printf("4. Charger un niveau avec un mot de passe.");
        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
        printf(" -'),'     :.   / /,\\_. <\n");
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED |FOREGROUND_BLUE |FOREGROUND_GREEN| FOREGROUND_INTENSITY);
        printf("5. Charger ou supprimer une sauvegarde.");
        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
        printf("\t  `'       |:  '\\    ::`'\n");
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED |FOREGROUND_BLUE |FOREGROUND_GREEN| FOREGROUND_INTENSITY);
        printf("6. Quitter.");
        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
        printf("\t\t\t\t           :   --'   ||\n");
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED |FOREGROUND_BLUE |FOREGROUND_GREEN| FOREGROUND_INTENSITY);
        printf("Choissez ce que vous voulez faire :");
        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
        printf("\t   ___,-':.-`________;;________\n");
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED |FOREGROUND_BLUE |FOREGROUND_GREEN| FOREGROUND_INTENSITY);
        saisie_entier_utilisateur(&choix);
    }while(choix<1||choix>6);

    Plateau p;

    Chaine mdp1;
    Chaine mdp2;
    Chaine mdp3;
    Chaine mdp4;
    char buf[STRING_MAX_LENGTH];

    switch(choix){
        case 1:
            system("cls");
            affichage_option_1();

            break;
        case 2:
            system("cls");
            p.mode_de_jeu=5;
            initialisation_plateau_scores(&p);
            saisie_nom_joueur(&p);
            //A partir des fichiers, on charge les 4 plateaux des 4 niveaux.
            system("cls");
            charge_plateau_Niveau1_depart(&p);
            affiche_plateau_entier(&p);
            jouer(&p,&verif,&verif_gain_partie);
            if(!verif){
                break;
            }
            else{
                p.mode_de_jeu++;
            }
            charge_plateau_Niveau2_depart(&p);
            affiche_plateau_entier(&p);
            jouer(&p,&verif,&verif_gain_partie);
            if(!verif){
                break;
            }
            else{
                p.mode_de_jeu++;
            }
            charge_plateau_Niveau3_depart(&p);
            affiche_plateau_entier(&p);

            jouer(&p,&verif,&verif_gain_partie);
            if(!verif){
                break;
            }
            else{
                p.mode_de_jeu++;
            }
            charge_plateau_Niveau4_depart(&p);
            affiche_plateau_entier(&p);
            jouer(&p,&verif,&verif_gain_partie);
            break;
        case 3:
            system("cls");
            affichage_option_3();
            //system("pause");
            break;
        case 4:
            system("cls");
            saisie_nom_joueur(&p);
            if(option4_menu(&p)){
                jouer(&p,&verif,&verif_gain_partie);
            }
            if(verif_gain_partie){
                append_fichier_scores(&p);
            }
            break;
        case 5:
            system("cls");
            option5_menu(&p,&verif,&verif_gain_partie);

            system("cls");
            break;
        case 6:
            return 0;
        default:
            return 0;
    }
    return 1;
}