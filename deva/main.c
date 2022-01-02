#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

typedef struct Personnage{
    int key;
    int age;
    char *nom;
    char *prenom;       //création d'une structure de personnages
    char *lore;
    char *statut;
}Personnage;


/*typedef struct node
{
    unsigned int key;
    struct Personnage perso;                //structure de stockage d'un noeud (même principe qu'une liste chainée)
    struct node *left;
    struct node *right;
} node ;

node *Arbre = NULL;

void addNode(node **tree, unsigned int key)
{
    node *tmpNode;
    node *tmpTree = *tree;

    node *elem = malloc(sizeof(node));
    elem->key = key;
    elem->left = NULL;
    elem->right = NULL;

    if(tmpTree)
    do
    {
        tmpNode = tmpTree;
        if(key > tmpTree->key )                     AJOUT D'UN NOEUD
        {
            tmpTree = tmpTree->right;
            if(!tmpTree) tmpNode->right = elem;
        }
        else
        {
            tmpTree = tmpTree->left;
            if(!tmpTree) tmpNode->left = elem;
        }
    }
    while(tmpTree);
    else  *tree = elem;
}

int searchNode(node *tree, unsigned int key)
{
    while(tree)
    {
        if(key == tree->key) return 1;                  FONCTIONS DE BASE D'UN ARBRE TROUVEES SUR INTERNET

        if(key > tree->key ) tree = tree->right;
        else tree = tree->left;                         RECHERCHE D'UN NOEUD
    }
    return 0;
}

void printTree(node *tree)
{
    if(!tree) return;

    if(tree->left)  printTree(tree->left);

    printf("Cle = %d\n", tree->key);                    AFFICHAGE DE L'ARBRE

    if(tree->right) printTree(tree->right);
}


void clearTree(node **tree)
{
    node *tmpTree = *tree;

    if(!tree) return;

    if(tmpTree->left)  clearTree(&tmpTree->left);           CLEAR DE L'ARBRE

    if(tmpTree->right) clearTree(&tmpTree->right);

    free(tmpTree);

    *tree = NULL;
}*/





Personnage creer_Personnage(int key,int age, char *nom,char *prenom, char *lore, char * stat)
{
    Personnage *p = (Personnage*)malloc(sizeof(Personnage));
    p->key=key;
    p->age=age;
    p->nom=strdup(nom);
    p->prenom=strdup(prenom);               //fonction permettant l'initialisation des differents personnages
    p->lore=strdup(lore);
    p->statut=strdup(stat);
    return *p;
}

const char* filename = "Choix_repartition(chiant)/Commencement/Commencement.txt";
const char* choix1C  = "Choix_repartition(chiant)/Commencement/CHOIX_1.txt";
const char* choix2C  = "Choix_repartition(chiant)/Commencement/CHOIX_2.txt";
const char* avant = "Choix_repartition(chiant)/Commentcement/Choix_telephonique/Avant_conv";
const char* etape_1  = "Choix_repartition(chiant)/Commencement/Choix_telephonique/ETAPE_1_CHOIX_TEL.txt";
const char* etape1c1  = "Choix_repartition(chiant)/Commencement/Choix_telephonique/CHOIX_1.txt";
const char* etape1c2  = "Choix_repartition(chiant)/Commencement/Choix_telephonique/CHOIX_2.txt";
const char* e1_c1  = "Choix_repartition(chiant)/Commencement/CHOIX_telephonique/EPREUVES/EPREUVE_1/CHOIX_1.txt";
const char* e1_c2 = "Choix_repartition(chiant)/Commencement/CHOIX_telephonique/EPREUVES/EPREUVE_1/CHOIX_2.txt";
const char* e2  = "Choix_repartition(chiant)/Commencement/CHOIX_telephonique/EPREUVES/EPREUVE_2/EPREUVE_2.txt";
const char* e2_c1  = "Choix_repartition(chiant)/Commencement/CHOIX_telephonique/EPREUVES/EPREUVE_2/CHOIX_1.txt";
const char* e2_c2  = "Choix_repartition(chiant)/Commencement/CHOIX_telephonique/EPREUVES/EPREUVE_2/CHOIX_2.txt";
const char* e2_end  = "Choix_repartition(chiant)/Commencement/CHOIX_telephonique/EPREUVES/EPREUVE_2/APRES_EP2.txt";                 //POINTEURS SUR DES CHEMINS D'ACCES VERS LES DIFFERENTS FICHIERS
const char* e3  = "Choix_repartition(chiant)/Commencement/CHOIX_telephonique/EPREUVES/EPREUVE_3/EPREUVE_3.txt";
const char* e3_c1  = "Choix_repartition(chiant)/Commencement/CHOIX_telephonique/EPREUVES/EPREUVE_3/CHOIX_1.txt";
const char* e3_c2  = "Choix_repartition(chiant)/Commencement/CHOIX_telephonique/EPREUVES/EPREUVE_3/CHOIX_2/CHOIX_2.txt";
const char* e4 = "Choix_repartition(chiant)/Commencement/CHOIX_telephonique/EPREUVES/EPREUVE_4/Epreuve_4.txt";
const char* e4_c1 = "Choix_repartition(chiant)/Commencement/CHOIX_telephonique/EPREUVES/EPREUVE_3/CHOIX_2/CHOIX_1_EPREUVE_4";
const char* e4_c2 = "Choix_repartition(chiant)/Commencement/CHOIX_telephonique/EPREUVES/EPREUVE_3_CHOIX_2/CHOIX_2_EPREUVE_4";
const char* e4v2_c1 = "Choix_repartition(chiant)/Commencement/CHOIX_telephonique/EPREUVES/EPREUVE_4/CHOIX_1";
const char* e4v2_c2 = "Choix_repartition(chiant)/Commencement/CHOIX_telephonique/EPREUVES/EPREUVE_4/CHOIX_2";
const char* e5 = "Choix_repartition(chiant)/Commencement/CHOIX_telephonique/EPREUVES/EPREUVE_5/Epreuve_5.txt";
const char* e5_c1  = "Choix_repartition(chiant)/Commencement/CHOIX_telephonique/EPREUVES/EPREUVE_5/CHOIX_1.txt";
const char* e5_c2  = "Choix_repartition(chiant)/Commencement/CHOIX_telephonique/EPREUVES/EPREUVE_5/CHOIX_2.txt";






int main(int argc, char *argv[])
{
    //pointe sur le chemin d'accès
    int choix = 0;  //variable initialisée à 0 si elle est à 1, le choix 1 est effectué, si elle est à 2, le choix 2 est effectué
    int finVar = 0; // variable qui va nous servir à savoir si la fin de l'épreuve 4 est la première ou non


    struct Personnage Leah;
    struct Personnage George;
    struct Personnage David;
    struct Personnage Mr_X;         //des variables de type struct Personnage qui représentent les différents personnages
    struct Personnage Helene;
    struct Personnage Emma;
    struct Personnage Sarah;

    Leah=creer_Personnage(1,18,"Carter","Leah","Une jeune femme de 18 ans, fille unique est a l’universite d’etat du Colorado, elle y etudie la fiscalite. Plutot bonne eleve, elle arrive dans les premiers de sa promo, elle habite chez ses parents qui l’aiment plus que tout au monde.","Etudiante");
    George=creer_Personnage(2,43,"Carter","George","C’est un homme de 43 ans, marie avec Helene, il travaille dans les ressources humaines d’une Banque. Il gagne plutot bien sa vie, arrive a bien gerer sa vie de famille et protege par dessus tout sa fille.","Travaille dans les ressources humaines");
    David=creer_Personnage(3,38,"Jackson","David","Homme de 38 ans. A abandonne ses etudes, a divorce avec son ancienne compagne. Il s’est reconverti dans le travail de paysagiste. Quand il etait petit, la solitude etait son quotidien, sans amis, sans un veritable amour de ses parents il etait triste au fond de lui, meme s’il le cachait bien.","Jardinier");
    Mr_X=creer_Personnage(4,666,"Mr","X","Histoire inconnue","Situation inconnue");   //CREATION DES DIFFERENTS PERSONNAGES AVEC LA FONCTION creer_Personnage()
    Helene=creer_Personnage(5,40,"Carter","Helene","Femme de 40 ans, mariee a George, elle travaille en tant que receptionniste dans un cabinet dentaire. Au fur est a mesure des annees elle ressent de moins en moins d’amour pour George.","Receptionniste dans un cabinet dentaire");
    Emma=creer_Personnage(6,18,"Emma","Sticker","Une jeune femme de 18 ans, meilleure amie de Leah. Elles se connaissent depuis la primaire, tres bonne eleve ,elle etudie dans le droit.","Etudiante dans le droit");
    Sarah=creer_Personnage(7,19,"Sarah","Dote","Une jeune femme de 19 ans, amie avec Leah et Emma. Elle etudie dans la fiscalite. C’est là qu’elle a rencontre Leah.","Etudiante dans la fiscalite");

/*    node *Arbre = NULL;
        //...
    addNode(&Arbre, 7);
    printf("Quel est l'id du personnage que vous voulez chercher ?\n");
    scanf("%d",Arbre->key);
    if(Arbre->key==1){
        printf("Personnage Leah : \n%d ans \n %s_%s \n %s \n %s\n\n",Leah.age,Leah.nom,Leah.prenom,Leah.statut,Leah.lore);
    }
    else if(Arbre->key==2){
        printf("Personnage George : \n%d ans \n %s_%s \n %s \n %s\n\n",George.age,George.nom,George.prenom,George.statut,George.lore);
    }
    else if(Arbre->key==3){
        printf("Personnage David : \n%d ans \n %s_%s \n %s \n %s\n\n",David.age,David.nom,David.prenom,David.statut,David.lore);
    }
    else if(Arbre->key==4){
        printf("Personnage Mr_X : \n%d ans \n %s_%s \n %s \n %s\n\n",Mr_X.age,Mr_X.nom,Mr_X.prenom,Mr_X.statut,Mr_X.lore);              PARTIE POUR RECUPERER LES ID DES PERSONNAGES
    }                                                                                                                                   ON AURAIT AIME UTILISER CA POUR LA PRESENTATION DES PERSONNAGES
    else if(Arbre->key==5){
        printf("Personnage Helene : \n%d ans \n %s_%s \n %s \n %s\n\n",Helene.age,Helene.nom,Helene.prenom,Helene.statut,Helene.lore);
    }
    else if(Arbre->key==6){
        printf("Personnage Emma : \n%d ans \n %s_%s \n %s \n %s\n\n",Emma.age,Emma.nom,Emma.prenom,Emma.statut,Emma.lore);
    }
    else if(Arbre->key==7){
        printf("Personnage Sarah : \n%d ans \n %s_%s \n %s \n %s\n\n",Sarah.age,Sarah.nom,Sarah.prenom,Sarah.statut,Sarah.lore);
    }
*/


        //on affecte un espace mémoire au pointeur sur des caractères, il faut allouer le nombre de caractères dans le fichier

    printf("Presentation des personnages que vous allez rencontrer :\n");
    sleep(2);   //LA FONCTION SLEEP SERA SOUVENT UTILISEE AFIN DE METTRE EN PAUSE LE PROGRAMME ET LAISSER LE TEMPS A L'UTILISATEUR DE LIRE

    printf("Personnage Leah : \n%d ans \n %s_%s \n %s \n %s\n\n",Leah.age,Leah.nom,Leah.prenom,Leah.statut,Leah.lore);
    sleep(6);
    printf("Personnage George : \n%d ans \n %s_%s \n %s \n %s\n\n",George.age,George.nom,George.prenom,George.statut,George.lore);
    sleep(6);
    printf("Personnage David : \n%d ans \n %s_%s \n %s \n %s\n\n",David.age,David.nom,David.prenom,David.statut,David.lore);
    sleep(6);
    printf("Personnage Mr_X : \n%d ans \n %s_%s \n %s \n %s\n\n",Mr_X.age,Mr_X.nom,Mr_X.prenom,Mr_X.statut,Mr_X.lore);
    sleep(2);
    printf("Personnage Helene : \n%d ans \n %s_%s \n %s \n %s\n\n",Helene.age,Helene.nom,Helene.prenom,Helene.statut,Helene.lore);
    sleep(6);
    printf("Personnage Emma : \n%d ans \n %s_%s \n %s \n %s\n\n",Emma.age,Emma.nom,Emma.prenom,Emma.statut,Emma.lore);
    sleep(6);
    printf("Personnage Sarah : \n%d ans \n %s_%s \n %s \n %s\n\n",Sarah.age,Sarah.nom,Sarah.prenom,Sarah.statut,Sarah.lore);
    sleep(6);
    printf("Le jeu va commencer.\n");
    sleep(1);







    FILE *in_file = fopen(filename, "r");   //on fait un pointeur sur un fichier in_file qui ouvre le fichier avec en entrée le nom du fichier ainsi que la méthode à utiliser (read / write par exemple)

    struct stat sb;
    stat(filename, &sb);    //prend en entrée le nom du fichier ainsi que sb

    char *file_contents = malloc(sb.st_size);       //ON ALLOUE LA MEMOIRE NECESSAIRE

    while (fscanf(in_file, "%[^\n] ", file_contents) != EOF) {              //LIT LE FICHIER DE COMMENCEMENT

        printf(" %s\n", file_contents);
        sleep(3);

                //boucle permettant la lecture du fichier ligne par ligne avec 4 secondes de délai, la fonction sleep permettant d'intégrer cette condition
    }

    fclose(in_file);       //fermeture du fichier in_file
    //on sort



    printf("Veuillez rentrer le choix que vous voulez faire et appuyez sur entrer\n");
    scanf("%d",&choix);
    if(choix==1){

        in_file = fopen(choix1C, "r");   //on fait un pointeur sur un fichier in_file qui ouvre le fichier avec en entrée le nom du fichier ainsi que la méthode à utiliser (read / write par exemple)

            //prend en entrée le nom du fichier ainsi que sb

            file_contents = malloc(sb.st_size);

            while (fscanf(in_file, "%[^\n] ", file_contents) != EOF) {                  //LIT LE FICHIER CHOIX 1

                printf(" %s\n", file_contents);
                sleep(3);

                //boucle permettant la lecture du fichier ligne par ligne
            }

            fclose(in_file);       //fermeture du fichier in_file
    }
    else if(choix==2)
    {
        in_file = fopen(choix2C, "r");   //on fait un pointeur sur un fichier in_file qui ouvre le fichier avec en entrée le nom du fichier ainsi que la méthode à utiliser (read / write par exemple)

        //prend en entrée le nom du fichier ainsi que sb

        file_contents = malloc(sb.st_size);

        while (fscanf(in_file, "%[^\n] ", file_contents) != EOF) {          //LIT LE FICHIER CHOIX 2

            printf(" %s\n", file_contents);
            sleep(3);
                     //boucle permettant la lecture du fichier ligne par ligne
        }

        fclose(in_file);       //fermeture du fichier in_file


    }

    choix=0;        //On réinitialise la variable vhoix afin de la réutiliser


    in_file = fopen(avant, "r");   //on fait un pointeur sur un fichier in_file qui ouvre le fichier avec en entrée le nom du fichier ainsi que la méthode à utiliser (read / write par exemple)

            //prend en entrée le nom du fichier ainsi que sb

            file_contents = malloc(sb.st_size);

            while (fscanf(in_file, "%[^\n] ", file_contents) != EOF) {                  //LIT LE FICHIER AVANT_conv

                printf(" %s\n", file_contents);
                sleep(3);

                //boucle permettant la lecture du fichier ligne par ligne
            }

            fclose(in_file);



            fclose(in_file);
    choix=0;
    printf("Veuillez choisir entre le choix 1 et 2\n");
    scanf("%d",&choix);
    if(choix==1){
            in_file = fopen(etape_1, "r");   //on fait un pointeur sur un fichier in_file qui ouvre le fichier avec en entrée le nom du fichier ainsi que la méthode à utiliser (read / write par exemple)

            //prend en entrée le nom du fichier ainsi que sb

            file_contents = malloc(sb.st_size);

            while (fscanf(in_file, "%[^\n] ", file_contents) != EOF) {                  //LIT LE FICHIER ETAPE_1_CHOIX_TEL

                printf(" %s\n", file_contents);
                sleep(3);

                //boucle permettant la lecture du fichier ligne par ligne
            }

            fclose(in_file);


            choix = 0;
            printf("Veuillez choisir entre le choix 1 et 2");
            scanf("%d",&choix);
            if(choix==1){
                 in_file = fopen(etape1c1, "r");   //on fait un pointeur sur un fichier in_file qui ouvre le fichier avec en entrée le nom du fichier ainsi que la méthode à utiliser (read / write par exemple)

            //prend en entrée le nom du fichier ainsi que sb

            file_contents = malloc(sb.st_size);

            while (fscanf(in_file, "%[^\n] ", file_contents) != EOF) {                  //LIT LE FICHIER CHOIX_1

                printf(" %s\n", file_contents);
                sleep(3);

                //boucle permettant la lecture du fichier ligne par ligne
            }

            fclose(in_file);
            printf("Vous avez fait le bon choix et avez eu une des bonnes fins\n");
            exit(1);
            }
            else if(choix==2){
                 in_file = fopen(etape1c2, "r");   //on fait un pointeur sur un fichier in_file qui ouvre le fichier avec en entrée le nom du fichier ainsi que la méthode à utiliser (read / write par exemple)

            //prend en entrée le nom du fichier ainsi que sb

            file_contents = malloc(sb.st_size);

            while (fscanf(in_file, "%[^\n] ", file_contents) != EOF) {                  //LIT LE FICHIER CHOIX_2

                printf(" %s\n", file_contents);
                sleep(3);

                //boucle permettant la lecture du fichier ligne par ligne
            }

            fclose(in_file);

            choix = 0;
            printf("Veuillez choisir entre le choix 1 et 2\n");
            scanf("%d",&choix);

            if(choix==1){

                in_file = fopen(e1_c1, "r");   //on fait un pointeur sur un fichier in_file qui ouvre le fichier avec en entrée le nom du fichier ainsi que la méthode à utiliser (read / write par exemple)

                    //prend en entrée le nom du fichier ainsi que sb

                    file_contents = malloc(sb.st_size);

                    while (fscanf(in_file, "%[^\n] ", file_contents) != EOF) {

                        printf(" %s\n", file_contents);
                        sleep(3);

                        //boucle permettant la lecture du fichier ligne par ligne
                    }

                    fclose(in_file);

            }
            else if(choix==2){

                in_file = fopen(e1_c2, "r");   //on fait un pointeur sur un fichier in_file qui ouvre le fichier avec en entrée le nom du fichier ainsi que la méthode à utiliser (read / write par exemple)

                    //prend en entrée le nom du fichier ainsi que sb

                    file_contents = malloc(sb.st_size);

                    while (fscanf(in_file, "%[^\n] ", file_contents) != EOF) {

                        printf(" %s\n", file_contents);
                        sleep(3);

                        //boucle permettant la lecture du fichier ligne par ligne
                    }

                    fclose(in_file);

            }

            choix=0;


            in_file = fopen(e2, "r");   //on fait un pointeur sur un fichier in_file qui ouvre le fichier avec en entrée le nom du fichier ainsi que la méthode à utiliser (read / write par exemple)

                    //prend en entrée le nom du fichier ainsi que sb

                    file_contents = malloc(sb.st_size);

                    while (fscanf(in_file, "%[^\n] ", file_contents) != EOF) {

                        printf(" %s\n", file_contents);
                        sleep(3);

                        //boucle permettant la lecture du fichier ligne par ligne
                    }

                    fclose(in_file);

            if(choix==1){

                in_file = fopen(e2_c1, "r");   //on fait un pointeur sur un fichier in_file qui ouvre le fichier avec en entrée le nom du fichier ainsi que la méthode à utiliser (read / write par exemple)

                    //prend en entrée le nom du fichier ainsi que sb

                    file_contents = malloc(sb.st_size);

                    while (fscanf(in_file, "%[^\n] ", file_contents) != EOF) {

                        printf(" %s\n", file_contents);
                        sleep(3);

                        //boucle permettant la lecture du fichier ligne par ligne
                    }

                    fclose(in_file);

            }
            else if(choix==2){

                in_file = fopen(e2_c2, "r");   //on fait un pointeur sur un fichier in_file qui ouvre le fichier avec en entrée le nom du fichier ainsi que la méthode à utiliser (read / write par exemple)

                    //prend en entrée le nom du fichier ainsi que sb

                    file_contents = malloc(sb.st_size);

                    while (fscanf(in_file, "%[^\n] ", file_contents) != EOF) {

                        printf(" %s\n", file_contents);
                        sleep(3);

                        //boucle permettant la lecture du fichier ligne par ligne
                    }

                    fclose(in_file);

            }

            choix=0;

            in_file = fopen(e2_end, "r");   //on fait un pointeur sur un fichier in_file qui ouvre le fichier avec en entrée le nom du fichier ainsi que la méthode à utiliser (read / write par exemple)

                    //prend en entrée le nom du fichier ainsi que sb

                    file_contents = malloc(sb.st_size);

                    while (fscanf(in_file, "%[^\n] ", file_contents) != EOF) {

                        printf(" %s\n", file_contents);
                        sleep(3);

                        //boucle permettant la lecture du fichier ligne par ligne
                    }

                    fclose(in_file);


            in_file = fopen(e3, "r");   //on fait un pointeur sur un fichier in_file qui ouvre le fichier avec en entrée le nom du fichier ainsi que la méthode à utiliser (read / write par exemple)

                    //prend en entrée le nom du fichier ainsi que sb

                    file_contents = malloc(sb.st_size);

                    while (fscanf(in_file, "%[^\n] ", file_contents) != EOF) {

                        printf(" %s\n", file_contents);
                        sleep(3);

                        //boucle permettant la lecture du fichier ligne par ligne
                    }

                    fclose(in_file);

            printf("Choisir entre le choix 1 et 2 :\n");
            scanf("%d",&choix);

            if(choix==1){

                in_file = fopen(e3_c1, "r");   //on fait un pointeur sur un fichier in_file qui ouvre le fichier avec en entrée le nom du fichier ainsi que la méthode à utiliser (read / write par exemple)

                    //prend en entrée le nom du fichier ainsi que sb

                    file_contents = malloc(sb.st_size);

                    while (fscanf(in_file, "%[^\n] ", file_contents) != EOF) {

                        printf(" %s\n", file_contents);
                        sleep(3);

                        //boucle permettant la lecture du fichier ligne par ligne
                    }

                    fclose(in_file);

            }
            else if(choix==2){

                in_file = fopen(e3_c2, "r");   //on fait un pointeur sur un fichier in_file qui ouvre le fichier avec en entrée le nom du fichier ainsi que la méthode à utiliser (read / write par exemple)

                    //prend en entrée le nom du fichier ainsi que sb

                    file_contents = malloc(sb.st_size);

                    while (fscanf(in_file, "%[^\n] ", file_contents) != EOF) {

                        printf(" %s\n", file_contents);
                        sleep(3);

                        //boucle permettant la lecture du fichier ligne par ligne
                    }

                    fclose(in_file);
                    choix = 0;
                    printf("Veuillez saisir le choix 1 ou 2.\n");
                    scanf("%d",&choix);

                    if(choix==1){

                        in_file = fopen(e4_c1, "r");   //on fait un pointeur sur un fichier in_file qui ouvre le fichier avec en entrée le nom du fichier ainsi que la méthode à utiliser (read / write par exemple)

                    //prend en entrée le nom du fichier ainsi que sb

                    file_contents = malloc(sb.st_size);

                    while (fscanf(in_file, "%[^\n] ", file_contents) != EOF) {
                        printf(" %s\n", file_contents);
                        sleep(3);

                        //boucle permettant la lecture du fichier ligne par ligne

                    }
                    printf("Vous avez termine le jeu et avez obtenu une mauvaise fin");
                    exit(1);

                    }
                    else if(choix==2){

                        in_file = fopen(e4_c2, "r");

                    file_contents = malloc(sb.st_size);

                    while (fscanf(in_file, "%[^\n] ", file_contents) != EOF) {

                        printf(" %s\n", file_contents);
                        sleep(3);


                    }
                    printf("Vous avez termine le jeu et avez obtenu une mauvaise fin");
                    sleep(2);
                    exit(1);

                    }



            }

            in_file = fopen(e4v2_c1, "r");

                    file_contents = malloc(sb.st_size);

                    while (fscanf(in_file, "%[^\n] ", file_contents) != EOF) {

                        printf(" %s\n", file_contents);
                        sleep(3);


                    }

            }

            in_file = fopen(e5, "r");

                    file_contents = malloc(sb.st_size);

                    while (fscanf(in_file, "%[^\n] ", file_contents) != EOF) {

                        printf(" %s\n", file_contents);
                        sleep(3);


                    }

            }
            choix=0;
            printf("Veuillez faire votre choix entre le 1 et le 2 \n");
            scanf("%d",&choix);
            if(choix==1){
                in_file = fopen(e5_c1, "r");

                    file_contents = malloc(sb.st_size);

                    while (fscanf(in_file, "%[^\n] ", file_contents) != EOF) {

                        printf(" %s\n", file_contents);
                        sleep(3);


                    }
                    printf("Vous avez eu la bonne fin, vous aurez donc droit à votre tarte au citron ainsi qu'a votre fille\n");
                    sleep(2);
                    exit(1);
            }
            else if(choix==2){

                in_file = fopen(e5_c2, "r");

                    file_contents = malloc(sb.st_size);

                    while (fscanf(in_file, "%[^\n] ", file_contents) != EOF) {

                        printf(" %s\n", file_contents);
                        sleep(3);


                    }
                    printf("Vous avez eu la fin 'humoristique' mais vous etes quand meme mort\n");

            }
             return 0;

    }

































