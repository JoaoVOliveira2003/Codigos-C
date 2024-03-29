#include"stdio.h"

void main()
{
  int numero,somado;

  printf("\informe numero :" );
  scanf("%d",&numero);

if (numero % 2 == 0)
    {
    somado=numero+5;
    printf("\n par,e somado vai dar: %d",somado);
    }
    else
    {

    somado=numero+8;
    printf("\n impar e somado vai dar :%d",somado);
}
}
