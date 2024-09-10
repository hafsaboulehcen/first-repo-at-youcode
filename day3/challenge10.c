#include <stdio.h>
#include <string.h>

int main(){
    char chaine[20];
    char sous_chaine[10];
    printf("entrer une chaine principale:");
    scanf(" %[^\n]s",chaine);
    printf("entrer une sous chaine:");
    scanf(" %[^\n]s",sous_chaine);
    if (strstr(chaine, sous_chaine) != 0) {
        printf("La sous-chaine %s est presente dans la chaine principale.\n", sous_chaine);
    } else {
        printf("La sous-chaine %s n'est pas presente dans la chaine principale.\n", sous_chaine);
    }

    return 0;
}
