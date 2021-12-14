#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

typedef struct Personnage{
    int age;
    char *nom;
    char *prenom;       //création d'une structure de personnages 
    char *lore;         
    char *statut;
}Personnage;

Personnage creer_Personnage(int age, char *nom,char *prenom, char *lore, char * stat)
{
    Personnage *p = (Personnage*)malloc(sizeof(Personnage));
    p->age=age;
    p->nom=strdup(nom);
    p->prenom=strdup(prenom);               //fonction permettant l'initialisation des differents personnages
    p->lore=strdup(lore);
    p->statut=strdup(stat);
    return *p;
}


int main(int argc, char *argv[])
{
    const char* filename = "Choix_repartition(chiant)/Commencement/.txt";   //pointe sur le chemin d'accès
    int choix = 0;  //variable initialisée à 0 si elle est à 1, le choix 1 est effectué, si elle est à 2, le choix 2 est effectué

    struct Personnage Leah;
    struct Personnage George;
    struct Personnage David;    
    struct Personnage Mr_X;         //des variables de type struct Personnage qui représentent les différents personnages
    struct Personnage Helene;
    struct Personnage Emma;
    struct Personnage Sarah;

    FILE *in_file = fopen(filename, "r");   //on fait un pointeur sur un fichier in_file qui ouvre le fichier avec en entrée le nom du fichier ainsi que la méthode à utiliser (read / write par exemple)

    struct stat sb;        
    stat(filename, &sb);    //prend en entrée le nom du fichier ainsi que sb 

    char *file_contents = malloc(sb.st_size);       //on affecte un espace mémoire au pointeur sur des caractères, il faut allouer le nombre de caractères dans le fichier


    Leah=creer_Personnage(18,"Carter","Leah","Une jeune femme de 18 ans, fille unique est à l’université d’état du Colorado, elle y étudie la fiscalité. Plutôt bonne élève, elle arrive dans les premiers de sa promo, elle habite chez ses parents qui l’aime plus que tout au monde.","Etudiante");
    George=creer_Personnage(43,"Carter","George","C’est un homme de 43 ans, marié avec Hélène, il travaille dans les ressources humaines d’une Banque. Il gagne plutôt bien sa vie, arrive à bien gérer sa vie de famille et protège par dessus tout sa fille.","Travaille dans les ressources humaines");
    David=creer_Personnage(38,"Jackson","David","Homme de 38 ans. A abandonné ses études, a divorcé avec son ancienne compagne. Il s’est reconverti dans le travail de paysagiste. Quand il était petit, la solitude était son quotidien, sans amis, sans un véritable amour de ses parents il était triste au fond de lui, même s’il le cachait bien.","Jardinier");
    Mr_X=creer_Personnage(666,"Mr","X","Histoire inconnue","Situation inconnue");   //fonction appelée pour la création des personnages 
    Helene=creer_Personnage(40,"Carter","Helene","Femme de 40 ans, marié a George, elle travaille en tant que réceptionniste dans un cabinet dentaire. Au fur est à mesure des années elle ressent de moins en moins d’amour pour George.","Receptionniste dans un cabinet dentaire");
    Emma=creer_Personnage(18,"Emma","Sticker","Une jeune femme de 18 ans, meilleure amie de Léah. Elles se connaissent depuis la primaire, très bonne élève ,elle étudie dans le droit.","Etudiante dans le droit");
    Sarah=creer_Personnage(19,"Sarah","Dote","Une jeune femme de 19 ans, amie avec Léah et Emma. Elle étudie dans la fiscalité. C’est là qu’elle a rencontré Léah.","Etudiante dans la fiscalite");

    printf("Personnage Leah : \n%d ans \n %s_%s \n %s \n %s\n\n",Leah.age,Leah.nom,Leah.prenom,Leah.statut,Leah.lore);
    printf("Personnage George : \n%d ans \n %s_%s \n %s \n %s\n\n",George.age,George.nom,George.prenom,George.statut,George.lore);
    printf("Personnage David : \n%d ans \n %s_%s \n %s \n %s\n\n",David.age,David.nom,David.prenom,David.statut,David.lore);
    printf("Personnage Mr_X : \n%d ans \n %s_%s \n %s \n %s\n\n",Mr_X.age,Mr_X.nom,Mr_X.prenom,Mr_X.statut,Mr_X.lore);              //test de l'affichage des différents personnages
    printf("Personnage Helene : \n%d ans \n %s_%s \n %s \n %s\n\n",Helene.age,Helene.nom,Helene.prenom,Helene.statut,Helene.lore);
    printf("Personnage Emma : \n%d ans \n %s_%s \n %s \n %s\n\n",Emma.age,Emma.nom,Emma.prenom,Emma.statut,Emma.lore);
    printf("Personnage Sarah : \n%d ans \n %s_%s \n %s \n %s\n\n",Sarah.age,Sarah.nom,Sarah.prenom,Sarah.statut,Sarah.lore);

    while (fscanf(in_file, "%[^\n] ", file_contents) != EOF) {

        printf(" %s\n", file_contents);         //boucle permettant la lecture du fichier ligne par ligne
    }

    fclose(in_file);       //fermeture du fichier in_file
    exit(EXIT_SUCCESS);    //on sort

    return 0;
}












