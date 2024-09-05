//challenge 1


#include <stdio.h>

int main() {
    int nbr ;
    printf("entrer un nombre :");
    scanf("%d",&nbr);
    for(int i=10;i>=1;i--){
        printf("%d*%d=%d\n",nbr,i,nbr*i);
    }

    return 0;
}


//challenge 2


#include <stdio.h>

int main() {
    int L;
    int i,j;
    printf("entrer le nombre des lignes:");
    scanf("%d",&L);
    for(i=0;i<=L;i++){
        for(j=0;j<=i;j++){
            printf("*");
        }
    printf("\n");
    }
    

    return 0;
}


//challenge 3


#include <stdio.h>
int i;
int est_premier(int nbr) {
    if (nbr <= 1) {
        return 0;
    }
    for ( i = 2; i * i <= nbr; i++) {
        if (nbr % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    printf("Entrez un entier n : ");
    scanf("%d", &n);
    printf("Les nombres premiers entre 1 et %d sont :\n", n);
    for (i = 2; i <= n; i++) {
        if (est_premier(i)) {
            printf("%d ", i);
        }
    }
    
    printf("\n");
    return 0;
}



//challenge 4


#include <stdio.h>

int main() {
    int nbr,reste,inverse;
    printf("entrer un entier :");
    scanf("%d",&nbr);
    while(nbr!=0){
        reste = nbr % 10;
        inverse = inverse * 10 + reste;
        nbr = nbr / 10;
    }
    printf("Nombre inverse : %d\n", inverse);

    return 0;
}



//chanllenge 5


#include <stdio.h>

int main() {
    int n;
    int somme = 0;
    printf("Entrez un nombre entier : ");
    scanf("%d", &n);
    for(int i = 0; i <= n; i++)
        somme += i;
    printf("La somme des %d premiers nombres naturels est : %d\n", n, somme);
    return 0;
}


//challenge 6


#include <stdio.h>
int main() {
    int n;
    printf("Entrez un entier positif:");
    scanf("%d",&n);

    if (n <= 0) {
        printf("Veuillez entrer un entier positif.\n");
    }
    printf("Les facteurs de %d sont: ", n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}    
vint max;
