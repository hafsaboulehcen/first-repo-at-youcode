challenge 1


#include <stdio.h>
int somme(int a,int b){
        return a + b;
    }
int main() {
    int a,b,resultat;
    printf("entrer a:");
    scanf("%d",&a);
    printf("entrer b:");
    scanf("%d",&b);
    resultat = somme(a,b);
    printf("la somme de %d et %d est: %d\n",a,b,resultat);

    return 0;
}



//challenge 2



#include <stdio.h>
int multi(int a,int b){
return a * b;
}
int main() {
    int a,b,result;
    printf("entrer a:");
    scanf("%d",&a);
    printf("entrer b:");
    scanf("%d",&b);
    result = multi(a,b);
    printf("le produit de %d et %d est:%d\n",a,b,result);

    return 0;
}



//challenge 3


#include <stdio.h>
int max;
int maximum(int a,int b){
    if(a>b)
    max = a;
    else
    max = b;
return max ;
}
int main() {
    int a,b;
    printf("entrer a:");
    scanf("%d",&a);
    printf("entrer b:");
    scanf("%d",&b);
    max = maximum(a,b);
    printf("le maximum de %d et %d est:%d\n",a,b,max);

    return 0;
}



//challenge 4


#include <stdio.h>
int min;
int minimum(int a,int b){
    if(a>b)
    min = b;
    else
    min = a;
return min ;
}
int main() {
    int a,b;
    printf("entrer a:");
    scanf("%d",&a);
    printf("entrer b:");
    scanf("%d",&b);
    min = minimum(a,b);
    printf("le minimum de %d et %d est:%d\n",a,b,min);

    return 0;
}


//challenge 8


#include<stdio.h>
int parite(int n){
       return (n % 2 == 0)? 1 : 0;
   }
int main() {
    int nbr;
    printf("entrer un nbr entier :");
    scanf("%d",&nbr);
    if(parite(nbr)){
        printf("%d est pair.\n",nbr);
    }
    else{
        printf("%d est impair.\n",nbr);
    }

    return 0;
}
    
 

//challenge 8


#include <stdio.h>
int parite(int n){
    if(n % 2 ==0)
    printf("%d est pair",n);
    else
    printf("%d est impair",n);
}
int main() {
    int nbr;
    printf("entrer un nbre entier:");
    scanf("%d",&nbr);
    parite(nbr);

    return 0;
}  