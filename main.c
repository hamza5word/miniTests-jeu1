/* Comme d'habitude les deux premiers lignes sont les directives du
Microprocesseur quit include tous les fonctions qu'on a besoin d'utiliser
dans le programes */

#include <stdio.h>
#include <stdlib.h>
#include <time.h> //cet bibliothéque est reservé pour les nombres aléaratoires !!

int main(int argc, char *argv[])
{
    const int MIN = 1;
    int NombreMystere = 0, Saisie = 0, ContinuePartie = 1, CMP = 0, MAX = 0;

    printf("-------------------------------- \n");
    printf("|   Beivenue dans Mon 1er Jeu  | \n");
    printf("|  Trouver Le Nombre Myster !! | \n");
    printf("|          GOOD LUCK           | \n");
    printf("-------------------------------- \n");

    do
    {
    printf("Choisie la difficulter : \n");
    printf("1- Nombres entre 1 et 100\n");
    printf("2- Nombres entre 1 et 1000\n");
    printf("3- Nombres entre 1 et 10000\n");
    printf("Votre Choix :\t");
    scanf("%d", &Saisie);
     switch (Saisie)
      {
        case 1 :
          MAX = 100;
          break;
        case 2 :
          MAX = 1000;
          break;
        case 3 :
          MAX = 10000;
          break;
      }
    printf("*****Choisie votre mode du jeu*****\n");
    printf("-------1- Une seule joueur---------\n");
    printf("-------2- Deux joueur--------------\n");
    printf("Votre Choix :\t");
    scanf("%d", &Saisie);
     if (Saisie == 1)
      {
      srand(time(NULL));
      NombreMystere = (rand() % (MAX - MIN + 1))+ MIN;
      }
     else if (Saisie == 2)
      {
        printf("L'un des joueur doit entrer le NombreMystere ! : \t");
        scanf("%d", &NombreMystere);
      }
     while (Saisie < MIN || Saisie > MAX)
      {
           printf("Attention nombre entre 1 et 100 :\n");
           printf("Queller le nombre ? :\t");
           scanf("%d", &Saisie);
      }

     do
      {
       printf("\nQueller le nombre ? :\t");
       scanf("%d", &Saisie);
       CMP++;
        while (Saisie < MIN || Saisie > MAX)
         {
           printf("Attention nombre entre 1 et 100 :\n");
           printf("Queller le nombre ? :\t");
           scanf("%d", &Saisie);
         }

        if (Saisie < NombreMystere)
         {
           printf("c'est plus !\n\n");
         }
        else if (Saisie > NombreMystere)
         {
           printf("c'est moin !\n\n");
         }
        else
         {
           printf("Bravoo!! Vous avez trouvez le nombre sur %d coups\n\n", CMP);
         }
    } while (Saisie != NombreMystere);
    printf("Nouvelle parties ? tappez 0 pour quiter OU 1 pour continuer\n : ");
    scanf("%d", &ContinuePartie);
    } while (ContinuePartie);


    return 0;
}





