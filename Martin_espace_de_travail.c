//
// Created by 33695 on 25/10/2023.
//
#include <stdio.h>
#include <stdlib.h>
#include "saisie_clavier.h"
#include "manip_fichiers_txt.h"
#include "manip_affichage_console.h"
#include "Structures.h"
#include "Chargement_Niveaux.h"

void sauvegarder_fichier(Plateau * ptPlateau){
    char buf[150];
    printf("Saisissez le nom du fichier de sauvegarde a ecrire : n'oubliez pas le format .txt a la fin\n");
    scanf("%s",buf);
    FILE * pF=fopen(buf, "w");
    //fprintf(pF,"Sauvegarde faite");
    for(int i=0;i<10;i++){
        for(int j=0;j<20;j++){
            fputc(ptPlateau->maMatrice[i][j],pF);
        }
        fputc('\n',pF);
    }
    fprintf(pF,"%s\n", ptPlateau->nom_joueur);
    fprintf(pF,"%d\n",ptPlateau->score);
    fprintf(pF,"%d\n",ptPlateau->temps_restant);
    fprintf(pF,"%d\n",ptPlateau->direction_snoopy);
    fprintf(pF,"%d\n",ptPlateau->X_Snoopy);
    fprintf(pF,"%d\n",ptPlateau->Y_Snoopy);
    fprintf(pF,"%d\n",ptPlateau->nb_oiseaux_restants);
    fprintf(pF,"%d\n",ptPlateau->mode_de_jeu);
    fprintf(pF,"%d\n",ptPlateau->nb_de_vies);
    fclose(pF);
}

int lire_fichier_de_sauvegarde(Plateau * ptPlateau){
    char buf[150];
    printf("Saisissez le nom du fichier de sauvegarde a lire : n'oubliez pas le format .txt a la fin.\n");
    scanf("%s",buf);
    FILE *pF=fopen(buf,"r");
    if(pF==NULL){
        printf("Erreur d'ouverture. Le nom du fichier n'existe pas.\n");
        return 0;
    }
    else {
        printf("Ouverture reussie! On lit le fichier.\n");
        char c='a';
        for(char i=0;i<10;i++){
            for(char j=0;j<20;j++){
                ptPlateau->maMatrice[i][j]= (char)getc(pF);
            }
            c=(char)getc(pF);
        }
        //fscanf(pF,"%s",ptPlateau->nom_joueur);
        fgets(ptPlateau->nom_joueur,50,pF);
        int i=0;//On enlève le \n en plus donnée par fgets.
        while(ptPlateau->nom_joueur[i]!='\0'&&ptPlateau->nom_joueur[i]!='\n'){
            i++;
        }
        ptPlateau->nom_joueur[i]='\0';
        fscanf(pF,"%d",&ptPlateau->score);
        fscanf(pF,"%d",&ptPlateau->temps_restant);
        fscanf(pF,"%d",&ptPlateau->direction_snoopy);
        fscanf(pF,"%d",&ptPlateau->X_Snoopy);
        fscanf(pF,"%d",&ptPlateau->Y_Snoopy);
        fscanf(pF,"%d",&ptPlateau->nb_oiseaux_restants);
        fscanf(pF,"%d",&ptPlateau->mode_de_jeu);
        fscanf(pF,"%d",&ptPlateau->nb_de_vies);
        printf("%s\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",ptPlateau->nom_joueur,ptPlateau->score
                ,ptPlateau->temps_restant,ptPlateau->direction_snoopy,ptPlateau->X_Snoopy
                ,ptPlateau->Y_Snoopy,ptPlateau->nb_oiseaux_restants
                ,ptPlateau->mode_de_jeu,ptPlateau->nb_de_vies);

        fclose(pF);
        return 1;
    }
}

void suppr_fichier_de_sauvegarde(){
    char buf[150];
    printf("Saisissez le nom du fichier de sauvegarde a ecrire : n'oubliez pas le format .txt a la fin\n");
    scanf("%s",buf);
    if(remove(buf)==0){
        printf("Suppression faite!\n");
    }
    else{
        printf("Erreur de suppression. Ce nom de fichier n'existe pas.\n");
    }
}

