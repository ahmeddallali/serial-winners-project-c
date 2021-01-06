#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include "callbacks.h"
#include "fonction.h"
#include<string.h>
#include <gtk/gtk.h>

int verifier( char nom[], char pwd[])
{ 
int a;
FILE* f;
char ch[30],ch1[30];
f=fopen("users","r");
if(f!=NULL)
{
while((fscanf(f,"%s %s %d", ch, ch1,&a)!=EOF))
{
if((strcmp(nom,ch)==0)&&(strcmp(pwd,ch1)==0)){
return(a);}}
fclose(f);}
else{
return(0); 
}}

void ajouter(client t)
{
FILE*f=NULL; //flot de donnée
f=fopen("client.txt","a");// creation du fichier equipement .txt et ouverture en  mode lecture et ecriture a la fin
fprintf(f,"%s %s %s %s %s %s %s %s %s \n",t.Nom,t.Prenom,t.Sexe,t.Cin,t.typee,t.identifiant,t.naissance.jour,t.naissance.mois,t.naissance.annee); //f variable de Prenom file 
fclose(f); //retour NULL si operation fini 
}



void supprimer (char identifiant[])
{
FILE*f=NULL;
FILE*f1=NULL;
client t ;
f=fopen("client.txt","r");
f1=fopen("ancien.txt","w+");//mode lecture et ecriture 
while(fscanf(f,"%s %s %s %s %s %s %s %s  %s\n",t.Nom,t.Prenom,t.Sexe,t.Cin,t.typee,t.identifiant,t.naissance.jour,t.naissance.mois,t.naissance.annee)!=EOF){
if(strcmp(identifiant,t.identifiant)!=0)fprintf(f1,"%s %s %s %s %s %s %s %s %s\n",t.Nom,t.Prenom,t.Sexe,t.Cin,t.typee,t.identifiant,t.naissance.jour,t.naissance.mois,t.naissance.annee);
}
fclose(f);
fclose(f1);
remove("client.txt");
rename("ancien.txt","client.txt");
}

void modifer(char id[30] ,client t2)
{
client t;
int trouve=0;
FILE *f,*f1;
f=NULL;
f1=NULL;
f=fopen("client.txt","r");
f1=fopen("client3.txt","w+");
if(f!=NULL)
{while((fscanf(f,"%s %s %s %s %s %s %s %s %s\n",t.Nom,t.Prenom,t.Sexe,t.Cin,t.typee,t.identifiant,t.naissance.jour,t.naissance.mois,t.naissance.annee)!=EOF))
{
if(strcmp(t.identifiant,t2.identifiant)==0)
{trouve=1;

fprintf(f1,"%s %s %s %s %s %s %s %s %s\n",t2.Nom,t2.Prenom,t2.Sexe,t2.Cin,t2.typee,t2.identifiant,t2.naissance.jour,t2.naissance.mois,t2.naissance.annee);
}
else
{fprintf(f1,"%s %s %s %s %s %s %s %s %s\n",t.Nom,t.Prenom,t.Sexe,t.Cin,t.typee,t.identifiant,t.naissance.jour,t.naissance.mois,t.naissance.annee);
}
}
}
fclose(f);
fclose(f1);
remove("client.txt");
rename("client3.txt","client.txt");
}
void afficher(GtkWidget* treeview1,char *l)
{
enum
{
idtf_t, 
nom_t,
prenom_t,
Sexe_t,
cin_t,
jour_t,
mois_t,
annee_t,
type_t,
columns
};

GtkCellRenderer *renderer;
GtkTreeViewColumn * column;
GtkTreeIter iter;
GtkListStore *store;

char identifiant[30];
char Nom[30];
char Prenom[30];
char Cin[30];
char Sexe[30];
char typee[30];
char jour[20];
char mois[20];
char annee[20];
FILE *f;
client t;
f=fopen("client.txt","a+");

store=NULL;
store=gtk_tree_view_get_model(treeview1);
if (store == NULL)
{

		renderer=gtk_cell_renderer_text_new();
		column=gtk_tree_view_column_new_with_attributes("identifiant",renderer,"text",idtf_t,NULL);
		gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1),column);

		renderer=gtk_cell_renderer_text_new();
		column=gtk_tree_view_column_new_with_attributes("Nom",renderer,"text",nom_t,NULL);
		gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1),column);

                renderer=gtk_cell_renderer_text_new();
		column=gtk_tree_view_column_new_with_attributes("Prenom",renderer,"text",prenom_t,NULL);
		gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1),column);

		renderer=gtk_cell_renderer_text_new();
		column=gtk_tree_view_column_new_with_attributes("Cin",renderer,"text",cin_t,NULL);
		gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1),column);

		renderer=gtk_cell_renderer_text_new();
		column=gtk_tree_view_column_new_with_attributes("Sexe",renderer,"text",Sexe_t,NULL);
		gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1),column);
		renderer=gtk_cell_renderer_text_new();
		column=gtk_tree_view_column_new_with_attributes("jour",renderer,"text",jour_t,NULL);
		gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1),column);
                 
                renderer=gtk_cell_renderer_text_new();
		column=gtk_tree_view_column_new_with_attributes("mois",renderer,"text",mois_t,NULL);
		gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1),column);

		renderer=gtk_cell_renderer_text_new();
		column=gtk_tree_view_column_new_with_attributes("annee",renderer,"text",annee_t,NULL);
		gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1),column);
		 

		renderer=gtk_cell_renderer_text_new();
		column=gtk_tree_view_column_new_with_attributes("typee",renderer,"text",type_t,NULL);
		gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1),column);







	store=gtk_list_store_new(columns,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING);

f=fopen("client.txt","r");

if (f == NULL ) {return;}
else
{
 while((fscanf(f,"%s %s %s %s %s %s %s %s %s\n"
,t.Nom,t.Prenom,t.Sexe,t.Cin,t.typee,t.identifiant,t.naissance.jour,t.naissance.mois,t.naissance.annee))!=EOF)
         {
         strcpy(identifiant,t.identifiant);
         strcpy(jour,t.naissance.jour);
         strcpy(mois,t.naissance.mois);
         strcpy(annee,t.naissance.annee);
strcpy(Nom,t.Nom);
strcpy(Prenom,t.Prenom);

strcpy(Sexe,t.Sexe);
strcpy(Cin,t.Cin);
strcpy(typee,t.typee);
	gtk_list_store_append (store, &iter);
	gtk_list_store_set (store, &iter,idtf_t,identifiant,jour_t,jour,mois_t,mois,annee_t,annee,nom_t,Nom,prenom_t,Prenom,cin_t,Cin,Sexe_t,Sexe,type_t,typee,-1);






}
fclose(f);
}
	gtk_tree_view_set_model(GTK_TREE_VIEW(treeview1),GTK_TREE_MODEL(store));
	g_object_unref(store);

}
}


enum
{

EID,
ENOM,
EPRENOM,
ES,
ECIN,
ETYPEE,
EJ,
EMOIS,
EANNEE,
COLUMNS
};


void rechercher_ouv(char Id[30],GtkWidget *liste)
{
	GtkCellRenderer *renderer;
	GtkTreeViewColumn *column;
	GtkTreeIter iter;
 	
	GtkListStore *store;
	
	char identifiant[30];
	char Nom[30];
	char Prenom[30];
	char Cin[30];
	char Sexe[30];
	char typee[30];
	char jour[20];
	char mois[20];
	char annee[20];
	int test=0;
store=NULL;

FILE *f;
//GtkTreeView *liste;

 store=gtk_tree_view_get_model(liste);
if(store==NULL)
{
	renderer =gtk_cell_renderer_text_new();
	column = gtk_tree_view_column_new_with_attributes("identifiant",renderer, "text",EID,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);

	renderer =gtk_cell_renderer_text_new();
	column = gtk_tree_view_column_new_with_attributes("Nom",renderer, "text",ENOM,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);

	renderer = gtk_cell_renderer_text_new();
	column =gtk_tree_view_column_new_with_attributes("Prenom",renderer,"text",EPRENOM,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);

	renderer = gtk_cell_renderer_text_new();
	column = gtk_tree_view_column_new_with_attributes("Cin",renderer, "text",ECIN,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);

	renderer = gtk_cell_renderer_text_new();
	column = gtk_tree_view_column_new_with_attributes("Sexe",renderer, "text",ES,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);


	renderer = gtk_cell_renderer_text_new();
	column = gtk_tree_view_column_new_with_attributes("jour",renderer, "text",EJ,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);

	renderer = gtk_cell_renderer_text_new();
	column = gtk_tree_view_column_new_with_attributes("mois",renderer, "text",EMOIS,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);

	renderer = gtk_cell_renderer_text_new();
	column = gtk_tree_view_column_new_with_attributes("annee",renderer, "text",EANNEE,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);

	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes("typee",renderer,"text",ETYPEE,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1),column);
	

}
store=gtk_list_store_new(COLUMNS,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING);
  f=fopen("client.txt","a+");
    if (f ==NULL)
    {
	return;
    }
else


    while( ((fscanf(f,"%s %s %s %s %s %s %s %s %s\n"
,Nom,Prenom,Sexe,Cin,annee,identifiant,jour,typee,mois))!=EOF)&&(test==0))
  
{ 
	if((strcmp(identifiant,Id)==0))
{
	test=1;
	gtk_list_store_append (store,&iter);
				gtk_list_store_set(store,&iter,EID,identifiant,EJ,jour,EMOIS,mois,EANNEE,annee,ENOM,Nom,EPRENOM,Prenom,ES,Sexe,ECIN,Cin,ETYPEE,typee,-1);
	}
	}
	
	fclose(f);
	gtk_tree_view_set_model(GTK_TREE_VIEW(liste), GTK_TREE_MODEL(store));

	g_object_unref(store);






}
int deffectueux (int iden [], char *fichier, float minv , float maxv )
{   FILE *f;
 int jour , mois, annee; 
float val;
    int n=0,i,t,k=0;
    int max;
    int id;
    f=fopen("temperature.txt","r");
    if(f!=NULL)
 {
    while(fscanf(f,"%d %d %d %d %f",&id,&jour,&mois,&annee,&val)!=EOF)
    {   //printf("id=%d val=%f\n",c.id,c.val);
        if(val>maxv||val<minv)
        {
                   iden[n]=id;
                   n++;
               }
           }
        }
         fclose(f);
    i=0;
    max=0;
    for(i=0;i<n;i++){
        for(t=0;t<n;t++){
            if(iden[i]==iden[t]){
                k++;
        }   }
        if(max<k)
        {   max=k;
            id=iden[i];
    }
    k=0;
    }
    i=0;
    while(i<n)
    {
        for(t=i+1;t<n;t++)
        {
            if(iden[i]==iden[t])
            {iden[t]=0;}
        }
        i++;
    }
    for(i=0;i<n;i++)
    {  if(iden[i]!=0)
        printf("%d/",iden[i]);
    }
    return id;
}



