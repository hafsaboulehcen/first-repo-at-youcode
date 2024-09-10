#include <stdio.h>
#include <string.h>
int main(){
    char chaine[20],chaine_inver[20];
    int longueur,i;
    printf("entrer chaine :");
    scanf("  %[^\n]s",chaine);
    longueur=strlen(chaine);
    for (i = 0; i < longueur; i++)
    {
        chaine_inver[i]=chaine[longueur-i-1];
    chaine_inver[longueur]='\0';
    printf("la chaine inversee est:%s\n",chaine_inver);
    return 0;
    
}