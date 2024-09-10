#include <stdio.h>
#include <string.h>
struct personne {
    char nom[20];
    char prenom[20];
    int age;
};

int main(){
    struct personne p1;
    strcpy(p1.nom,"Boulehcen");
    strcpy(p1.prenom,"Hafsa");
    p1.age=19;
    printf("nom:%s\n",p1.nom);
    printf("prenom:%s\n",p1.prenom);
    printf("age:%d\n",p1.age);
    return 0;
}