
#include <stdio.h>

int main()
{
    char nom[16],prenom[12],sexe;
    int age;
    printf("saisir votre nom:");
    scanf("%s",nom);
    printf("saisir votre prenom:");
    scanf("%s",prenom);
    printf("saisir votre age:");
    scanf("%d",&age);
    printf("saisir votre sexe:");
    scanf(" %c",&sexe);
    printf("vous etes %s %s vous avez %d et vous etes %c",nom,prenom,age,sexe);

    return 0;
}
exercice 4