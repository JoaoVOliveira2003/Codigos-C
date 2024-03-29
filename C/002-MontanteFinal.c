#include "stdio.h"
#include "math.h"

void main()
{
    float juro,periodo,capital,montantefinal;

    printf(" inserir o capital: ");
    scanf("%f",&capital);
    printf(" inserir taxa de juros mensal: ");
    scanf("%f",&juro);
    printf(" inserir montante periodo: ");
    scanf("%f",&periodo);

   montantefinal=capital*pow((1+juro/100),periodo);


printf("\n montante final:%f ",montantefinal);
}
