#ifndef GESTIONELECTIONS_H_INCLUDED
#define GESTIONELECTIONS_H_INCLUDED
#include <stdio.h>


typedef struct Date{
int jour;
int mois;
int annee;
}date;

typedef struct {
char municipalite[100];
int id;
date d;
int nbr_habitants;
int nbr_conseillers;
}elections;

int Ajouter_YT(char *,elections );
void Afficher_YT(char *,elections);
int Modifier_YT(char *,int ,elections );
int Supprimer_YT(char *,int  );
void Enregistrer_YT(char *,elections);
#endif
















