#include"stdio.h"
#include"locale.h"
void main()
{
  float precofinal;
  int fotos;

  printf("\nINFORME numero de fotos:" );
  scanf("%d",&fotos);

    if(200<fotos){
    precofinal=fotos*0.20;
    }

    else

    {
    precofinal=fotos*0.40;
    }

    printf("\n preco final a ser pago :%0.2f",precofinal);

}

