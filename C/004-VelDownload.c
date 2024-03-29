#include "stdio.h"


void main()
{
    float bits,seg,velocidade,min,resto;


    printf(" inserir bits: ");
    scanf("%f",&bits);


    printf("inserir segundo:");
    scanf("%f",&seg);


    velocidade=bits/seg;


    printf("\n velocidade:%f",velocidade);
    printf("-----------:");


    min=velocidade/60;
    printf("\n min:%f",min);


    resto= velocidade%60;
    printf("\n resto:%f",resto);


}
