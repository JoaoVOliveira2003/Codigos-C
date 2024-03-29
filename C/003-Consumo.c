#include "stdio.h"
void main()
{
    float km,comb,media;

    printf("Informar kilometros andados:");
    scanf("%f",&km);

    printf("Informar combustivel gasto:");
    scanf("%f",&comb);

    media=km/comb;

    printf("\n media:%f",media);
}

