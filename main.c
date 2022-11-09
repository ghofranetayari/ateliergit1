#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "gestionelections.h"

int main()
{
date d1={07,11,2022};
date d2={06,11,2022};
elections e1={"municipalité1",1234,d1,500,50};
elections e2={"municipalité2",5678,d2,500,50};

int x;
x=Ajouter_YT("test.txt",e1);
if(x==1)
printf("\nAjout d'éléction avec succés !");
else
printf("\nÉchec d'ajout !!");

/*x=Modifier_YT("test.txt",1234,e2);
if(x==1)
printf("\nModification d'éléction avec succés !");
else
printf("\nÉchec de modification !!");
x=Supprimer_YT("test.txt",5678);
if(x==1)
printf("Supression d'éléction avec succés !");
else 
printf("Échec de supression !!");*/
return 0;
}
