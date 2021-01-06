#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "tree.h"
#include "fonction.h"
char type[30];
char typeeajout[30];



void
on_buttonLDT_clicked                   (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *p;
GtkWidget *windowGT, *windowL, *treeview1;
gtk_widget_hide (windowGT);
gtk_widget_destroy(windowGT);
windowL = create_windowL ();
p=lookup_widget(windowL,"treeview1");
afficher(p,"ouvrier.txt");
gtk_widget_show (windowL);
}


void
on_buttonNDT_clicked                   (GtkWidget        *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *windowGT,*windowN;
windowGT=lookup_widget(objet_graphique,"windowGT");
//gtk_widget_destroy(windowGT);
windowN=lookup_widget(objet_graphique,"windowN");
windowN=create_windowN();
gtk_widget_show(windowN);
}


void
on_buttonM_clicked                     (GtkWidget      *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *windowGT,*windowA;
windowGT=lookup_widget(objet_graphique,"windowGT");
gtk_widget_destroy(windowGT);
windowM=lookup_widget(objet_graphique,"windowA");
windowM=create_windowM();
gtk_widget_show(windowM);
}


void
on_buttonS_clicked                     (GtkWidget     *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *windowGT,*windowS;
windowGT=lookup_widget(objet_graphique,"windowGT");
gtk_widget_destroy(windowGT);
windowS=lookup_widget(objet_graphique,"windowS");
windowS=create_windowS();
gtk_widget_show(windowS);
}




void
on_buttonA_clicked                     (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *windowGT,*windowA;
windowGT=lookup_widget(objet_graphique,"windowGT");
gtk_widget_destroy(windowGT);
windowA=lookup_widget(objet_graphique,"windowA");
windowA=create_windowA();
gtk_widget_show(windowA);
}


void
on_treeview1_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
 GtkTreeIter iter;
   gchar *identifiant;
        gchar *Nom;
        gchar *Prenom;
        gchar *Cin;
	gchar *Sexe;
	gchar *typee;      
        gchar *jour;
        gchar *mois;
        gchar *annee;
	char mot[20];
	int id;
      GtkTreeModel *model = gtk_tree_view_get_model(treeview);

if(gtk_tree_model_get_iter(model,&iter,path))
{

gtk_tree_model_get (GTK_LIST_STORE(model),&iter,0,identifiant,1,jour,2,mois,3,annee,4,Nom,5,Prenom,6,Cin,7,Sexe,8,typee,-1);
id=identifiant;

}

       
}


void
on_buttonModifie_clicked               (GtkWidget      *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *p;
GtkWidget *windowGT,*windowM,*windowL;
client t2;
char ch[20];
GtkWidget
 *identifiant,*Nom,*Prenom,*jour,*mois,*annee,*Cin,*Sexe,*treeview1;


identifiant=lookup_widget(objet_graphique,"entry4");
strcpy(ch,gtk_entry_get_text(GTK_ENTRY(identifiant)));


jour=lookup_widget(objet_graphique,"spinbutton6");
sprintf(t2.naissance.jour,"%d", gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(jour)));
mois=lookup_widget(objet_graphique,"spinbutton7");
sprintf(t2.naissance.mois,"%d", gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(mois)));
annee=lookup_widget(objet_graphique,"spinbutton8");
sprintf(t2.naissance.annee,"%d", gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(annee)));

identifiant=lookup_widget(objet_graphique,"entry4");
strcpy(t2.identifiant,gtk_entry_get_text(GTK_ENTRY(identifiant)));


Nom=lookup_widget(objet_graphique,"entry14");
strcpy(t2.Nom,gtk_entry_get_text(GTK_ENTRY(Nom)));
Prenom=lookup_widget(objet_graphique,"entry15");
strcpy(t2.Prenom,gtk_entry_get_text(GTK_ENTRY(Prenom)));
Cin=lookup_widget(objet_graphique,"entry16");
strcpy(t2.Cin,gtk_entry_get_text(GTK_ENTRY(Cin)));
Sexe=lookup_widget(objet_graphique,"combobox7");
strcpy(t2.Sexe,gtk_combo_box_get_active_text(GTK_COMBO_BOX(Sexe)));
strcpy(t2.typee,type);
modifer(ch,t2);
windowM=lookup_widget(objet_graphique,"windowM");
gtk_widget_destroy(windowM);
windowGT=lookup_widget(objet_graphique,"windowGT");
windowGT=create_windowGT();
gtk_widget_show(windowGT);
//treeview1=lookup_widget(windowL,"treeview1");

//afficher(treeview1);

        


        afficher(p,"client.txt");
}







void
on_button6_clicked                     (GtkWidget        *objet_graphique,
                                        gpointer         user_data)
{
char 	Id[30];
GtkWidget *windowliste;
GtkWidget *id;
id = lookup_widget (objet_graphique,"entry10");
strcpy(Id,gtk_entry_get_text(GTK_ENTRY(id)));


GtkWidget *treeview_Affichage;
windowliste=lookup_widget (objet_graphique,"windowL");

treeview_Affichage=lookup_widget (windowliste,"treeview1");

rechercher_ouv(Id , treeview_Affichage);




}


void
on_buttonAjoute_clicked                (GtkWidget      *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *p;
GtkWidget *windowGT,*windowA,*windowL;
client t;
GtkWidget
 *identifiant,*Nom,*Prenom,*jour,*mois,*annee,*Cin,*Sexe,*treeview1;
jour=lookup_widget(objet_graphique,"jour");
sprintf(t.naissance.jour,"%d", gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(jour)));
mois=lookup_widget(objet_graphique,"mois");
sprintf(t.naissance.mois,"%d", gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(mois)));
annee=lookup_widget(objet_graphique,"spinbutton3");
sprintf(t.naissance.annee,"%d", gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(annee)));

identifiant=lookup_widget(objet_graphique,"entryIdentifiant");
strcpy(t.identifiant,gtk_entry_get_text(GTK_ENTRY(identifiant)));


Nom=lookup_widget(objet_graphique,"entry11");
strcpy(t.Nom,gtk_entry_get_text(GTK_ENTRY(Nom)));
Prenom=lookup_widget(objet_graphique,"entry12");
strcpy(t.Prenom,gtk_entry_get_text(GTK_ENTRY(Prenom)));
Cin=lookup_widget(objet_graphique,"entry13");
strcpy(t.Cin,gtk_entry_get_text(GTK_ENTRY(Cin)));
Sexe=lookup_widget(objet_graphique,"combobox8");
strcpy(t.Sexe,gtk_combo_box_get_active_text(GTK_COMBO_BOX(Sexe)));
strcpy(t.typee,typeeajout);
ajouter(t);
windowA=lookup_widget(objet_graphique,"windowA");
gtk_widget_hide(windowA);
windowGT=lookup_widget(objet_graphique,"windowGT");
windowGT=create_windowGT();
gtk_widget_show(windowGT);
//treeview1=lookup_widget(windowL,"treeview1");

//afficher(treeview1);

        


        afficher(p,"client.txt");
}


void
on_buttonSupprime_clicked              (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *identifiant;
client t;
identifiant=lookup_widget(objet_graphique,"entry1");
strcpy(t.identifiant,gtk_entry_get_text(GTK_ENTRY(identifiant)));
supprimer (t.identifiant);
windowS=lookup_widget(objet_graphique,"windowS");
gtk_widget_hide(windowS);
windowGT=lookup_widget(objet_graphique,"windowGT");
windowGT=create_windowGT();
gtk_widget_show(windowGT);
}


void
on_buttonTaux_clicked                  (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_ajoutabs_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{


}


void
on_button7_clicked                     (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *windowGT;
GtkWidget *windowL;
windowGT=lookup_widget(objet_graphique,"windowGT");
windowL=create_windowL();	
gtk_widget_show(windowL);
gtk_widget_hide(windowGT);
}


void
on_button9_clicked                     (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *windowGT;
GtkWidget *windowL;
windowL=lookup_widget(objet_graphique,"windowL");
windowGT=create_windowGT();	
gtk_widget_show(windowGT);
gtk_widget_hide(windowL);
}


void
on_button8_clicked                     (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *windowA;
GtkWidget *windowGT;
windowA=lookup_widget(objet_graphique,"windowA");
windowGT=create_windowGT();	
gtk_widget_show(windowGT);
gtk_widget_hide(windowA);
}


void
on_button10_clicked                    (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *windowS;
GtkWidget *windowGT;
windowS=lookup_widget(objet_graphique,"windowS");
windowGT=create_windowGT();	
gtk_widget_show(windowGT);
gtk_widget_hide(windowS);
}


void
on_buttonverif_clicked                 (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *Nomm, *input1,*ouput1,*ouput2,*ouput3,*ouput4,*ouput5,*ouput6,*ouput8,*ouput7,*ouput9,*ouput10;
GtkWidget *fenetremodif;
char chnb1[30],chnb2[30],chnb3[30], Nom[30];
fenetremodif=lookup_widget(objet_graphique,"windowM");
client t,p;
input1=lookup_widget(objet_graphique,"entry4");
strcpy(p.identifiant,gtk_entry_get_text(GTK_ENTRY(input1)));



FILE *f;
f=fopen("client.txt","r");
while((fscanf(f,"%s %s %s %s %s %s %s %s %s \n"
,t.Nom,t.Prenom,t.Sexe,t.Cin,t.typee,t.identifiant,t.naissance.jour,t.naissance.mois,t.naissance.annee))!=EOF)
{
if(strcmp(p.identifiant,t.identifiant)==0)
{
ouput7=lookup_widget(objet_graphique,"label29") ;
gtk_label_set_text(GTK_LABEL(ouput7),t.identifiant); 

//ouput2=lookup_widget(objet_graphique,"label67") ;
sprintf(chnb1,"%s",t.naissance.jour);
sprintf(chnb2,"%s",t.naissance.mois);
sprintf(chnb3,"%s",t.naissance.annee);
ouput2=lookup_widget(objet_graphique,"label45") ;
gtk_label_set_text(GTK_LABEL(ouput2),chnb1);
gtk_widget_show (ouput2);

ouput3=lookup_widget(objet_graphique,"label44") ;
gtk_label_set_text(GTK_LABEL(ouput3),chnb2);
gtk_widget_show (ouput3);
ouput8=lookup_widget(objet_graphique,"label43") ;
gtk_label_set_text(GTK_LABEL(ouput8),chnb3);
gtk_widget_show (ouput8);
ouput1=lookup_widget(objet_graphique,"label46") ;
gtk_label_set_text(GTK_LABEL(ouput1),t.Nom);
gtk_widget_show (ouput1);
ouput6=lookup_widget(objet_graphique,"label47") ;
gtk_label_set_text(GTK_LABEL(ouput6),t.Prenom);
gtk_widget_show (ouput6);
ouput4=lookup_widget(objet_graphique,"label48") ;
gtk_label_set_text(GTK_LABEL(ouput4),t.Cin);
gtk_widget_show (ouput4);
ouput9=lookup_widget(objet_graphique,"label49") ;
gtk_label_set_text(GTK_LABEL(ouput9),t.Sexe);
gtk_widget_show (ouput9);
ouput10=lookup_widget(objet_graphique,"label52") ;
gtk_label_set_text(GTK_LABEL(ouput10),t.typee);
gtk_widget_show (ouput10);
}
}
fclose(f);



}


void
on_checkbutton1_toggled                (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if (gtk_toggle_button_get_active(togglebutton)){strcpy(type,"vente");}
}


void
on_checkbutton2_toggled                (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if (gtk_toggle_button_get_active(togglebutton)){strcpy(type,"achat");}
}


void
on_checkbutton3_toggled                (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if (gtk_toggle_button_get_active(togglebutton)){strcpy(typeeajout,"vente");}
}


void
on_checkbutton4_toggled                (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if (gtk_toggle_button_get_active(togglebutton)){strcpy(typeeajout,"achat");}
}


void
on_button27y_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{
gtk_main_quit();
}


void
on_button1y_clicked                    (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *nom;
GtkWidget *pwd;
GtkWidget *output;
GtkWidget *window1y;
GtkWidget *window2y;

char login[30],mdp[30];
int ver;

nom=lookup_widget(objet_graphique,"entry1y");
pwd=lookup_widget(objet_graphique,"entry2y");
output=lookup_widget(objet_graphique,"label3y");
strcpy(login,gtk_entry_get_text(GTK_ENTRY(nom)));
strcpy(mdp,gtk_entry_get_text(GTK_ENTRY(pwd)));
 ver =verifier(login,mdp);
if (ver==1)
{
window1y=lookup_widget(objet_graphique,"window1y");
window2y=create_window2y();
gtk_widget_show(window2y);
gtk_widget_hide(window1y);
}
else

{

gtk_label_set_text(GTK_LABEL(output),"erreur");

}
}


void
on_button3Y_clicked                    (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *window2y;
GtkWidget *windowGT;
window2y=lookup_widget(objet_graphique,"window2y");
windowGT=create_windowGT();	
gtk_widget_show(windowGT);
gtk_widget_hide(window2y);
}


void
on_button4y_clicked                    (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *window2y;
GtkWidget *windowGT;
window2y=lookup_widget(objet_graphique,"window2y");
windowGT=create_windowGT();	
gtk_widget_show(windowGT);
gtk_widget_hide(window2y);
}


void
on_button5y_clicked                    (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *window2y;
GtkWidget *ykcapteur;
window2y=lookup_widget(objet_graphique,"window2y");
ykcapteur=create_ykcapteur();	
gtk_widget_show(ykcapteur);
gtk_widget_hide(window2y);
}


void
on_button6y_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttonretour1y_clicked              (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *window1y;
GtkWidget *windowGT;
windowGT=lookup_widget(objet_graphique,"windowGT");
window1y=create_window1y();	
gtk_widget_show(window1y);
gtk_widget_hide(windowGT);
}


void
on_buttonretour2y_clicked              (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *window2y;
GtkWidget *window1y;
window2y=lookup_widget(objet_graphique,"window2y");
window1y=create_window1y();	
gtk_widget_show(window1y);
gtk_widget_hide(window2y);
}


void
on_ykcapt_clicked                      (GtkWidget      *objet,
                                        gpointer         user_data)
{
 GtkWidget *output;
char texte [200]="";
{
FILE *f;
int i,j;
int deft=0;
int def[30];
int T[20];
char M[500][20];

int d;
char marque [20];
int n=deffectueux(T,"temperature.txt",-5,60.5);

int nbr=0;
f=fopen("marque.txt","r");
    if(f!=NULL)
 {
while(fscanf(f,"%s %d",marque,&d)!=EOF)
{

          strcpy(M[nbr],marque);
          def[nbr]=0;
          nbr++;

  }
}
 fclose(f);
 i=0;
 while(i<nbr)
 {
     for(j=i+1;j<nbr;j++)
        {
            if(strcmp(M[i],M[j])==0)
            {strcpy(M[j],"00000");
            }
        }
        i++;
 }
 for(j=0;j<nbr;j++)
    {if(strcmp(M[j],"00000")!=0)
    {printf("/%s/",M[j]);
    deft++;}}

sprintf (texte,"la marque la plus defectueuse est %s ",M[n-1]);
output=lookup_widget(objet,("yklabel42"));
gtk_label_set_text(GTK_LABEL(output),texte);

}
}

