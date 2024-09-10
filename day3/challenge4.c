#include <stdio.h>
int main(){
    char chaine1[20],chaine2[20];
    printf("entrer chaine 1:");
    scanf("  %[^\n]s",chaine1);
    printf("entrer chaine 2:");
    scanf("  %[^\n]s",chaine2);
    if(strcmp(chaine1,chaine2)==0){
        printf("les deux chaines sont egales.\n");
    }else{
        printf("les deux chaines ne sont pas egales .\n");
    }
    return 0;
}