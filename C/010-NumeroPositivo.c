#include"stdio.h"

#include"locale.h"
void main()
{
  float NUMERO;

  printf("\nINFORME VALOR NUMERO:" );
  scanf("\n %f",&NUMERO);
    if(0<NUMERO){

    printf("NUMERO POSITIVO");
    }
    else
    {
        printf("NUMERO NEGATIVO");
    }
}

