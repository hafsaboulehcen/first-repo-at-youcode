#include <stdio.h>
#include <string.h>
struct student {
    char nom[20];
    char prenom[20];
    int notes[3];
};
int main(){
    struct student s;
    strcpy(s.nom,"Boulehcen");
    strcpy(s.prenom,"Hafsa");
    s.notes[0]=14;
    s.notes[1]=15;
    s.notes[2]=16;
    printf("nom:%s\n",s.nom);
    printf("prenom:%s\n",s.prenom);
    printf("notes:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n",s.notes[i]);
    }
    printf("\n");
    return 0;
    

}
