//challenge 1(tableau)
#include <stdio.h>

int main() {
    int tableau[] = {1, 2, 3, 4, 5};
    int taille = sizeof(tableau) / sizeof(tableau[0]);
    for(int i = 0; i < taille; i++) {
        printf("%d\n", tableau[i]);
    }
    
    return 0;
}




//challenge 2(tableau)
#include <stdio.h>

   int main() {
   int n, i;
    printf("Entrez le nombre d'elements: ");
    scanf("%d", &n);
    int tableau[n];
    printf("Entrez les elements du tableau:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &tableau[i]);
    }
    printf("Les elements du tableau sont:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    return 0;
}




//challenge 3(tableau)
#include <stdio.h>

    int main() {
    int n;
    int somme = 0;
    printf("Entrez le nombre d'éléments : ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Le nombre d'éléments doit être positif.\n");
    }
    int tableau[n];
    for (int i = 0; i < n; i++) {
        printf("Entrez l'élément %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }
    for (int i = 0; i < n; i++) {
        somme += tableau[i];
    }
    printf("La somme totale des éléments est : %d\n", somme);

    return 0;
}



//challenge 4(tableau)
#include <stdio.h>

int main() {
    int n, i, max;
    printf("Entrez le nombre d'elements: ");
    scanf("%d", &n);
    int tableau[n];
    printf("Entrez les elements du tableau:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &tableau[i]);
    }
    max = tableau[0];
    for (i = 1; i < n; i++) {
        if (tableau[i] > max) {
            max = tableau[i];
        }
    printf("Le plus grand element du tableau est: %d\n", max);
    
    return 0;
}



//challenge 5 (tableau)
#include <stdio.h>

int main() {
   int n, i, min;
    printf("Entrez le nombre d'elements: ");
    scanf("%d", &n);
    int tableau[n];
    printf("Entrez les elements du tableau:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &tableau[i]);
    }
    min = tableau[0];
   for (i = 1; i < n; i++) {
        if (tableau[i] < min) {
            min = tableau[i];
        }
    }
    printf("Le plus petit element du tableau est: %d\n", min);

    return 0;
}



//challenge 6 (tableau)
#include <stdio.h>

int main() {
    int n, i, facteur;
    printf("Entrez le nombre d'elements: ");
    scanf("%d", &n);
    int tableau[n];
    printf("Entrez les elements du tableau:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &tableau[i]);
    }
    printf("Entrez le facteur de multiplication: ");
    scanf("%d", &facteur);
    for (i = 0; i < n; i++) {
        tableau[i] *= facteur;
    }
    printf("Le tableau resultant est:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", tableau[i]);
    }
    
    printf("\n");

    return 0;
}


//challenge 10 (tableau)


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



//challenge 11 (tableau)


#include <stdio.h>
int main() {
    int n,i,r,nov;
    printf("entrez le nombre des elements du tableau:");
    scanf("%d",&n);
    int T[n];
    printf("entrez les elements du tableau:");

    for(i=0;i<n;i++){
        scanf("%d",&T[i]);
    }    
        
     printf("entrer la valeur a remplacer :");
    scanf("%d",&r);
    printf("enter la nouvelle valeur:");
    scanf("%d",&nov);
    for(i=0;i<n;i++){
        if(T[i] == r)
        T[i] = nov;
    }    
    printf("le tableau apres le remplasement :");
    for(i=0;i<n;i++){
        printf("%d", T[i]);
    }
    printf("\n");
    
    return 0;
}

//challenge 12 (tableau)


#include <stdio.h>
int main() {
    int n,i;
    printf("entrez le nombre des elements du tableau:");
    scanf("%d",&n);
    int T[n];
    printf("entrez les elements du tableau:");

    for(i=0;i<n;i++){
        scanf("%d",&T[i]);
    }
    
    printf("les elements pairs sont:");
    for(i=0;i<n;i++){
        if(T[i] % 2==0)
         printf("%d",T[i]);

    }
    return 0;
}



//challenge 13 (tableau)

#include <stdio.h>
int main() {
    int n,i;
    printf("entrez le nombre des elements du tableau:");
    scanf("%d",&n);
    int T[n];
    printf("entrez les elements du tableau:");

    for(i=0;i<n;i++){
        scanf("%d",&T[i]);
    }
    
    printf("les elements ipmairs sont:");
    for(i=0;i<n;i++){
        if(T[i] % 2 !=0)
         printf("%d",T[i]);

    }
    
    
    return 0;
}


//challenge 14 (tableau)

#include <stdio.h>
int main() {
    int n,i,s,m;
    printf("entrez le nombre des elements du tableau:");
    scanf("%d",&n);
    int T[n];
    printf("entrez les elements du tableau:");
    s =0;
    for(i=0;i<n;i++){
        scanf("%d",&T[i]);
    }
    for(i=0;i<n;i++){
        s = s + T[i];
        m = s / T[i]; 
    }
         printf("la moyenne est :%d",m);
    
    
    return 0;
}
