#include <stdio.h>
int main(){
    char chaine[20];
    printf("entrer une chaine:");
    scanf(" %[^\n]s",&chaine);
    printf("la chaine est:%s",chaine);
    return 0;
}