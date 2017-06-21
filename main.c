#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{
//Le nombre maximal du vecteur
int max = 100;
//Le nombre minimal du vecteur
int min=1;
//Le nombre aleatoire genrer par la fct srand
int nm=0;
//Le nombre a introduire par le joueur
int ni=0;
//La reponse du joueur
int nr=0;
//Le nombre de tour que le joueur met pour  trouver le nombre magique
int t=0;
//La fct quie genere le nombre magique
srand(time(NULL));
nm=(rand()%(max-min+1))+min;

printf("Entrer votre numero entre 1 et 100\n");
//La boucle qui fait tous le boulot
while (nm!=ni){
    int t=0;
    scanf("%d",&ni);
    if (nm<ni){
        printf("C'est plus\n");
            }
    else {if(nm>ni){
            printf("C'est moins\n");
                }
        else{
            printf("C'est bon OURAAAAH\n");
            printf("Gangner en %d tour(s)\n",&t);};}
t=t+1;}






printf("Voulez vous contiuer a jouer ? \n");
printf("Taper 1 pour continuer a jouer sinon 2 pour quitter !\n");
scanf("%d",&nr);
if (nr==1){
    int max = 1000;
    int min=1;
    int nm=0,ni=0;
    int nr=0;
    int t=0;
    nm=(rand()%(max-min+1))+min;
    printf("Entrer votre numero entre 1 et 1000\n");
    while (nm!=ni){
        scanf("%d",&ni);
        if (nm<ni){
            printf("C'est plus\n");
                }
        else {if(nm>ni){
                printf("C'est moins\n");
                    }
                else{
                printf("C'est bon OURAAAAH\n");
                printf("Gangner en %d tour(s)\n",&t);};};
    t=t+1;}



printf("Taper 1 pour continuer a jouer sinon 2 pour quitter !\n");
printf("Voulez vous contiuer a jouer ? \n");
scanf("%d",&nr);
if (nr==1){
int max = 10000;
int min=1;
int nm=0,ni=0;
int nr=0;
int t=0;
nm=(rand()%(max-min+1))+min;
printf("Entrer votre numero entre 1 et 10000\n");
while (nm!=ni){
    scanf("%d",&ni);
    if (nm<ni){
        printf("C'est plus\n");
            }
    else {if(nm>ni){
            printf("C'est moins\n");
                }
        else{
            printf("C'est bon OURAAAAH\n");
            printf("Gangner en %d tour(s)\n",&t);};}
t=t+1;}
}
else {
printf("Votre partie est terminee\n");};}
    return 0;
}
