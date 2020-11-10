/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

#define GLADE_HOOKUP_OBJECT(component,widget,name) \
  g_object_set_data_full (G_OBJECT (component), name, \
    gtk_widget_ref (widget), (GDestroyNotify) gtk_widget_unref)

#define GLADE_HOOKUP_OBJECT_NO_REF(component,widget,name) \
  g_object_set_data (G_OBJECT (component), name, widget)

GtkWidget*
create_ADboutonaddequipment (void)
{
  GtkWidget *ADboutonaddequipment;
  GtkWidget *fixed1;
  GtkWidget *entryNom;
  GtkWidget *entryQuantite;
  GtkWidget *entry3;
  GtkWidget *labelNomEquipement;
  GtkWidget *labelAjout;
  GtkWidget *labelMarque;
  GtkWidget *labelQuantite;
  GtkWidget *entryPrix;
  GtkWidget *labelPrix;
  GtkWidget *labelTache;
  GtkWidget *entry5;
  GtkWidget *buttonAjouter;
  GtkWidget *label7;

  ADboutonaddequipment = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (ADboutonaddequipment), _("add equipment"));

  fixed1 = gtk_fixed_new ();
  gtk_widget_show (fixed1);
  gtk_container_add (GTK_CONTAINER (ADboutonaddequipment), fixed1);

  entryNom = gtk_entry_new ();
  gtk_widget_show (entryNom);
  gtk_fixed_put (GTK_FIXED (fixed1), entryNom, 184, 80);
  gtk_widget_set_size_request (entryNom, 296, 24);
  gtk_entry_set_text (GTK_ENTRY (entryNom), _("    nom equipement"));
  gtk_entry_set_invisible_char (GTK_ENTRY (entryNom), 8226);

  entryQuantite = gtk_entry_new ();
  gtk_widget_show (entryQuantite);
  gtk_fixed_put (GTK_FIXED (fixed1), entryQuantite, 232, 152);
  gtk_widget_set_size_request (entryQuantite, 176, 32);
  gtk_entry_set_text (GTK_ENTRY (entryQuantite), _("nombre"));
  gtk_entry_set_invisible_char (GTK_ENTRY (entryQuantite), 8226);

  entry3 = gtk_entry_new ();
  gtk_widget_show (entry3);
  gtk_fixed_put (GTK_FIXED (fixed1), entry3, 232, 216);
  gtk_widget_set_size_request (entry3, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry3), 8226);

  labelNomEquipement = gtk_label_new (_("Nom Equipement:"));
  gtk_widget_show (labelNomEquipement);
  gtk_fixed_put (GTK_FIXED (fixed1), labelNomEquipement, 32, 64);
  gtk_widget_set_size_request (labelNomEquipement, 152, 24);

  labelAjout = gtk_label_new (_("  AJOUTER UN EQUIPEMENT"));
  gtk_widget_show (labelAjout);
  gtk_fixed_put (GTK_FIXED (fixed1), labelAjout, 184, 8);
  gtk_widget_set_size_request (labelAjout, 184, 32);

  labelMarque = gtk_label_new (_("Marque :"));
  gtk_widget_show (labelMarque);
  gtk_fixed_put (GTK_FIXED (fixed1), labelMarque, 16, 200);
  gtk_widget_set_size_request (labelMarque, 136, 24);

  labelQuantite = gtk_label_new (_("Quantite :"));
  gtk_widget_show (labelQuantite);
  gtk_fixed_put (GTK_FIXED (fixed1), labelQuantite, 8, 136);
  gtk_widget_set_size_request (labelQuantite, 144, 24);

  entryPrix = gtk_entry_new ();
  gtk_widget_show (entryPrix);
  gtk_fixed_put (GTK_FIXED (fixed1), entryPrix, 232, 280);
  gtk_widget_set_size_request (entryPrix, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entryPrix), 8226);

  labelPrix = gtk_label_new (_("Prix"));
  gtk_widget_show (labelPrix);
  gtk_fixed_put (GTK_FIXED (fixed1), labelPrix, 16, 272);
  gtk_widget_set_size_request (labelPrix, 104, 24);

  labelTache = gtk_label_new (_("Tache"));
  gtk_widget_show (labelTache);
  gtk_fixed_put (GTK_FIXED (fixed1), labelTache, 16, 336);
  gtk_widget_set_size_request (labelTache, 104, 24);

  entry5 = gtk_entry_new ();
  gtk_widget_show (entry5);
  gtk_fixed_put (GTK_FIXED (fixed1), entry5, 136, 352);
  gtk_widget_set_size_request (entry5, 408, 32);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry5), 8226);

  buttonAjouter = gtk_button_new_with_mnemonic (_("Ajouter"));
  gtk_widget_show (buttonAjouter);
  gtk_fixed_put (GTK_FIXED (fixed1), buttonAjouter, 248, 440);
  gtk_widget_set_size_request (buttonAjouter, 120, 32);

  label7 = gtk_label_new (_("a  ete bien ajouter"));
  gtk_widget_show (label7);
  gtk_fixed_put (GTK_FIXED (fixed1), label7, 128, 512);
  gtk_widget_set_size_request (label7, 424, 32);

  g_signal_connect ((gpointer) buttonAjouter, "clicked",
                    G_CALLBACK (on_buttonAjouter_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (ADboutonaddequipment, ADboutonaddequipment, "ADboutonaddequipment");
  GLADE_HOOKUP_OBJECT (ADboutonaddequipment, fixed1, "fixed1");
  GLADE_HOOKUP_OBJECT (ADboutonaddequipment, entryNom, "entryNom");
  GLADE_HOOKUP_OBJECT (ADboutonaddequipment, entryQuantite, "entryQuantite");
  GLADE_HOOKUP_OBJECT (ADboutonaddequipment, entry3, "entry3");
  GLADE_HOOKUP_OBJECT (ADboutonaddequipment, labelNomEquipement, "labelNomEquipement");
  GLADE_HOOKUP_OBJECT (ADboutonaddequipment, labelAjout, "labelAjout");
  GLADE_HOOKUP_OBJECT (ADboutonaddequipment, labelMarque, "labelMarque");
  GLADE_HOOKUP_OBJECT (ADboutonaddequipment, labelQuantite, "labelQuantite");
  GLADE_HOOKUP_OBJECT (ADboutonaddequipment, entryPrix, "entryPrix");
  GLADE_HOOKUP_OBJECT (ADboutonaddequipment, labelPrix, "labelPrix");
  GLADE_HOOKUP_OBJECT (ADboutonaddequipment, labelTache, "labelTache");
  GLADE_HOOKUP_OBJECT (ADboutonaddequipment, entry5, "entry5");
  GLADE_HOOKUP_OBJECT (ADboutonaddequipment, buttonAjouter, "buttonAjouter");
  GLADE_HOOKUP_OBJECT (ADboutonaddequipment, label7, "label7");

  return ADboutonaddequipment;
}

GtkWidget*
create_window2 (void)
{
  GtkWidget *window2;

  window2 = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (window2), _("window2"));

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (window2, window2, "window2");

  return window2;
}

