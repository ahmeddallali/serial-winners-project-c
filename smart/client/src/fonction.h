int verifier( char nom[], char pwd[]);

typedef struct
{
    char jour[30];
    char mois[30];
    char annee[30];
}date;

typedef struct 
{
char identifiant[30];
char Nom[30];
char Prenom[30];
char Cin[30];
char Sexe[30];
char typee[30];
date naissance;
} client;

void ajouter (client t );
int exister (char*identifiant);
void supprimer (char identifiant[]);
void modifer(char ch[] ,client t2);

void afficher(GtkWidget* treeview1 ,char *l);
void rechercher_ouv(char Id[30],GtkWidget *liste);



int deffectueux (int iden [], char *fichier, float minv , float maxv );



