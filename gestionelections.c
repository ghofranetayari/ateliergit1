#include "gestionelections.h"





int Ajouter_YT(char *filename,elections e)
{
FILE * f=fopen(filename,"a");
if(f!=NULL)
{
fprintf(f,"\n%s %d %d/%d/%d %d %d",e.municipalite,e.id,e.d.jour,e.d.mois,e.d.annee,e.nbr_habitants,e.nbr_conseillers);
fclose(f);
return 1;
}
else return 0;
}
 




int Modifier_YT(char *filename,int id,elections new)
{
int tr=0;
elections e;
FILE * f=fopen(filename, "r");
FILE * f2=fopen("new.txt", "w");
if(f!=NULL && f2!=NULL)
{
while(fscanf(f,"%s %d %d %d %d %d %d",e.municipalite,&e.id,&e.d.jour,&e.d.mois,&e.d.annee,&e.nbr_habitants,&e.nbr_conseillers));
{
if(e.id==id)
{
fprintf(f2,"\n%s %d %d %d %d %d %d",new.municipalite,new.id,new.d.jour,new.d.mois,new.d.annee,new.nbr_habitants,new.nbr_conseillers);
tr=1;
}
else
fprintf(f2,"\n%s %d %d %d %d %d %d\n",e.municipalite,e.id,e.d.jour,e.d.mois,e.d.annee,e.nbr_habitants,e.nbr_conseillers);
}
}
fclose(f);
fclose(f2);
remove(filename);
rename("new.txt",filename);
return tr;
}





int Supprimer_YT(char *filename,int id)
{
int tr=0;
elections e;
FILE * f=fopen(filename,"r");
FILE * f2=fopen("nouv.txt","w");
if((f!=NULL)&&(f2!=NULL))
{
while(fscanf(f,"%s %d %d %d %d %d %d",e.municipalite,&e.id,&e.d.jour,&e.d.mois,&e.d.annee,&e.nbr_habitants,&e.nbr_conseillers)!=EOF)
{
if(e.id==id)
tr=1;
else
fprintf(f2,"\n%s %d %d %d %d %d %d",e.municipalite,e.id,e.d.jour,e.d.mois,e.d.annee,e.nbr_habitants,e.nbr_conseillers);
}}
fclose(f);
fclose(f2);
remove(filename);
rename("nouv.txt",filename);
return tr;
}

elections chercher(char * filename,int id)
{
elections e;
int tr;
FILE * f=fopen(filename,"r");
if(f!=NULL)
{
while((tr==0)&&(fscanf(f,"%s %d %d %d %d %d %d",e.municipalite,&e.id,&e.d.jour,&e.d.mois,&e.d.annee,&e.nbr_habitants,&e.nbr_conseillers)!=EOF))
{
if(e.id==id)
tr=1;
}}
fclose(f);
if(tr==0)
e.id=-1;
return e;
}


