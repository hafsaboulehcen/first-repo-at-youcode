#include <stdio.h>
#include <ctype.h>
int main(){
    char chaine[20];
    printf("entrer chaine :");
    scanf("  %[^\n]s",chaine);
    for (int i = 0;chaine[i]!='\0' ; i++)
    {
        chaine[i]=toupper(chaine[i]);
    }
    printf("la chaine en majuscules est:%s\n",chaine);
    
}