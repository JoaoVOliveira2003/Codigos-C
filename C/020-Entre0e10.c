#include"stdio.h"
#include "locale.h"
#include "stdlib.h"

void main()
{

 setlocale(LC_ALL, "Portuguese");
    int a;


  printf("\nINFORME VALOR A:" );
  scanf("\n %d",&a);
  if((a>=0) && (a<=10))
    {
        printf("numero do intervalo");
    }
    else
    {
        printf("numero fora do intervalo");
    }
}
