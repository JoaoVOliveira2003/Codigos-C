#include"stdio.h"
#include "locale.h"
#include "stdlib
void main()
{
    int a;
  printf("\n Informe A:" );
  scanf("\n %d",&a);

  if( a%2==0 )//1
    {
     if(a<=50){printf("Macaco par e menor que 50");}
     else{printf("Macaco par e maior que 50");}
    }
    else
    {
    if(a>=15){printf("Macaco impar e maior que 15");}
     else{printf("Macaco impar e menor que 15");}
    }
}
