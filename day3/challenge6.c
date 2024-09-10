#include <stdio.h>
#include <string.h>
int main()
{
    char chaine[20];
    char caractere;
    int counter = 0;
    printf("entrer chaine :");
    scanf("  %[^\n]s",chaine);
    printf("entrer un caractere:\n");
    scanf(" %c", &caractere);

    for (int i = 0;chaine[i]!='\0' ; i++){
        if (chaine[i] == caractere)
        {
            counter++;
            
        }
       
    }
    printf("le cractere '%c' existe %d fois dans la chaine.\n", caractere, counter);
    return 0;
}