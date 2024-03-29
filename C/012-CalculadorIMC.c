
#include "stdio.h"
#include "math.h"

void main()
{
    float altura,peso,mmc;

    printf(" inserir o altura: ");
    scanf("%f",&altura);
    printf(" inserir peso: ");
    scanf("%f",&peso);

   mmc = peso/(altura*altura);

   printf("\n mmc final:%f",mmc);
}
