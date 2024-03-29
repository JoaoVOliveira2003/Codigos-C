
#include"stdio.h"
#include "locale.h"
#include "stdlib.h"

void main()
{

 setlocale(LC_ALL, "Portuguese");
    int idade;


  printf("\nINFORME VALOR idade:" );
  scanf("\n %d",&idade);
  if((idade<=18) || (idade>=68))
    {
        printf("NÃO PODE DOAR SANGUE");
    }
    else
    {
        printf("PODE DOAR SANGUE");
    }
}
