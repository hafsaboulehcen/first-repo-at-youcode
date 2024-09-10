#include <stdio.h>
#include <string.h>
int main(){
    char chaine1[20],chaine2[20],chaine_concatene[40];
    int i=0;
    printf("entrer chaine 1:");
    scanf("  %[^\n]s",&chaine1);
    printf("entrer chaine 2:");
    scanf("  %[^\n]s",&chaine2);
    while (chaine1[i]!='\0')
    {
        chaine_concatene[i] = chaine1[i];
        i++;
    }
    int j=0;
    while(chaine2[j]!='\0'){
        chaine_concatene[i] = chaine1[j];
        j++;
    }
    printf("la chaine concatene est :%s",chaine_concatene);
    
}