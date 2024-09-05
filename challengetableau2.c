//challenge 10


#include <stdio.h>
int main() {
    int n,i,ele_recherche;
    printf("entrez le nombre des elements du tableau:");
    scanf("%d",&n);
    int T[n];
    printf("entrez les elements du tableau:");

    for(i=0;i<n;i++){
        scanf("%d",&T[i]);
    }    
        
     printf("entrer element a rechercher :");
    scanf("%d",&ele_recherche);
    for(i=0;i<n;i++){
        if(T[i] == ele_recherche)
        printf("cet element existe");
        
    }    
    printf("le tableau apres le remplasement :");
    for(i=0;i<n;i++){
        printf("%d", T[i]);
    }
    printf("\n");
    
    return 0;
}