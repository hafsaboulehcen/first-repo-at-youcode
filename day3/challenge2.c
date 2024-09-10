#include <stdio.h>
int main(){
    char chaine[20];
    int longueur = 0;
    printf("entrer une chaine:");
    scanf(" %[^\n]s",&chaine);
    for(int i=0;chaine[i]!='\0';i++){
        longueur++;
    }
    printf("longueur de chaine est :%d",longueur);
    return 0;
}
