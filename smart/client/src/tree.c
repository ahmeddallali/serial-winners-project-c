
#include <gtk/gtk.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "fonction.h"

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

char jour[20];
char mois[20];
char annee[20];
FILE *f;
ouvrier t;
f=fopen("ouvrier.txt","a+");

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






	store=gtk_list_store_new(columns,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING);

f=fopen("ouvrier.txt","r");

if (f == NULL ) {return;}
else
{
 while((fscanf(f,"%s %s %s %s %s %s %s %s\n"
,t.identifiant,t.naissance.jour,t.naissance.mois,t.naissance.annee,t.Nom,t.Prenom,t.Sexe,t.Cin))!=EOF)
         {
         strcpy(identifiant,t.identifiant);
         strcpy(jour,t.naissance.jour);
         strcpy(mois,t.naissance.mois);
         strcpy(annee,t.naissance.annee);
strcpy(Nom,t.Nom);
strcpy(Prenom,t.Prenom);

strcpy(Sexe,t.Sexe);
strcpy(Cin,t.Cin);

	gtk_list_store_append (store, &iter);
	gtk_list_store_set (store, &iter,idtf_t,identifiant,jour_t,jour,mois_t,mois,annee_t,annee,nom_t,Nom,prenom_t,Prenom,Sexe_t,Sexe,cin_t,Cin,-1);






}
fclose(f);
}
	gtk_tree_view_set_model(GTK_TREE_VIEW(treeview1),GTK_TREE_MODEL(store));
	g_object_unref(store);

}
}


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
columns
};
void rechercher_ouv(char Id[30],GtkWidget *treeview1)
{



GtkCellRenderer *renderer;
	GtkTreeViewColumn *column;
	GtkTreeIter iter;
 	GtkWidget *windowL;
	GtkListStore *store;
	ouvrier t;
	char identifiant[30];
char Nom[30];
char Prenom[30];
char Cin[30];
char Sexe[30];

char jour[20];
char mois[20];
char annee[20];

store=NULL;

FILE *f;
//GtkTreeView *liste;

 store=gtk_tree_view_get_model(treeview1);
if(store==NULL)
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

store=gtk_list_store_new(columns,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING);
f=fopen("ouvrier.txt","a+");

    if (f ==NULL)
    {
	return;
    }
else


    while((fscanf(f, "%s %s %s %s %s %s %s %s  \n" , t.identifiant,t.naissance.jour,t.naissance.mois,t.naissance.annee,t.Nom,t.Prenom,t.Sexe,t.Cin))!=EOF)
  
{ 
	if((strcmp(Id,t.identifiant)==0))
	gtk_list_store_append (store,&iter);
				gtk_list_store_set(store,&iter,idtf_t,t.identifiant,jour_t,t.naissance.jour,mois_t,t.naissance.mois,annee_t,t.naissance.annee,nom_t,t.Nom,prenom_t,t.Prenom,Sexe_t,t.Sexe,cin_t,t.Cin,-1);


	}
	
	fclose(f);
	gtk_tree_view_set_model(GTK_TREE_VIEW(treeview1), GTK_TREE_MODEL(store));

	g_object_unref(store);
}

}
