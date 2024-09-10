#include <stdio.h>
int main(){
    char chaine[20];
    printf("entrer une chaine:");
    scanf(" %[^\n]s",chaine);
    for(int i=0;chaine[i]!='\0';i++){
        if(chaine[i]>='A' && chaine[i]<= 'Z'){
           chaine[i]=chaine[i]+32;        
        }
    }
    printf("la chaine en minuscules est:%s\n",chaine);
    return 0;
}
