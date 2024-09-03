#include<stdio.h>
#include <math.h>

int main()
{
    float c;
    printf("saisir la temperature:");
    scanf("%f",&c);
    if(c<0)
    printf("eau solide");
    if(c>=100)
    printf("eau gaz");
    else
    printf("eau liquide");

    return 0;
}