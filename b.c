#include<stdio.h>
#include <math.h>

int main()
{
    float ms,kmh;
    printf("saisir la vitesse en km/kmh:");
    scanf("%f",&kmh);
    ms = kmh * 0.27778;
    printf("la vitesse en m/s est: %f",ms);

    return 0;
}