#include <stdio.h>
int main(){
    char chaine[20],chaine_sans_espace[20];
    int j=0;
    printf("entrer une chaine:");
    scanf("%[^\n]s",chaine);
    for ( int i = 0;chaine[i]!='\0'; i++)
    {
        if(chaine[i]!=' '){
            chaine_sans_espace[j]=chaine[i];
            j++;        
        }
    }
    chaine_sans_espace[j]='\0';
    printf("la chaine sans espace est:%s\n",chaine_sans_espace);
    

}