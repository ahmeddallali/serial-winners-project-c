#include <gtk/gtk.h>
GtkWidget *windowGT;
  GtkWidget *windowL;
  GtkWidget *windowA;
  GtkWidget *windowM;
  GtkWidget *windowN;
  GtkWidget *windowS;
  GtkWidget *treeview1;


void
on_buttonLDT_clicked                   (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_buttonNDT_clicked                   (GtkWidget        *objet_graphique,
                                        gpointer         user_data);

void
on_buttonM_clicked                     (GtkWidget        *objet_graphique,
                                        gpointer         user_data);

void
on_buttonS_clicked                     (GtkWidget        *objet_graphique,
                                        gpointer         user_data);

void
on_buttonA_activate                    (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_buttonA_clicked                     (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_treeview1_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_buttonModifie_clicked               (GtkWidget       *objet_graphique,
                                        gpointer         user_data);



void
on_buttonA_clicked                     (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_button6_clicked                     (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_buttonAjoute_clicked                (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_buttonSupprime_clicked              (GtkWidget        *button,
                                        gpointer         user_data);

void
on_buttonTaux_clicked                  (GtkButton       *button,
                                        gpointer         user_data);

void
on_ajoutabs_clicked                    (GtkButton       *button,
                                        gpointer         user_data);

void
on_button7_clicked                     (GtkButton       *button,
                                        gpointer         user_data);

void
on_button9_clicked                     (GtkButton       *button,
                                        gpointer         user_data);

void
on_button8_clicked                     (GtkButton       *button,
                                        gpointer         user_data);

void
on_button10_clicked                    (GtkButton       *button,
                                        gpointer         user_data);

void
on_buttonverif_clicked                 (GtkButton       *button,
                                        gpointer         user_data);

void
on_checkbutton1_toggled                (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_checkbutton2_toggled                (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_checkbutton3_toggled                (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_checkbutton4_toggled                (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_button27y_clicked                   (GtkButton       *objet_graphique,
                                        gpointer         user_data);

void
on_button1y_clicked                    (GtkButton       *objet_graphique,
                                        gpointer         user_data);

void
on_button3Y_clicked                    (GtkButton       *objet_graphique,
                                        gpointer         user_data);

void
on_button4y_clicked                    (GtkButton       *objet_graphique,
                                        gpointer         user_data);

void
on_button5y_clicked                    (GtkButton       *objet_graphique,
                                        gpointer         user_data);

void
on_button6y_clicked                    (GtkButton       *button,
                                        gpointer         user_data);

void
on_buttonretour1y_clicked              (GtkButton       *objet_graphique,
                                        gpointer         user_data);

void
on_buttonretour2y_clicked              (GtkButton       *objet_graphique,
                                        gpointer         user_data);

void
on_ykcapt_clicked                      (GtkWidget      *objet,
                                        gpointer         user_data);
