#include <stdio.h>

int main()
{
    float a,b,c,s;
    printf("entrer a:");
    scanf("%f",&a);
    printf("entrer b:");
    scanf("%f",&b);
    printf("entrer c:");
    scanf("%f",&c);
    s = (a * 2) + (b * 3) + (c * 5)/10;
    
    printf("la moyenne est:%f",s);

    return 0;
}