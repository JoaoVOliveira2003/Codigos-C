#include "locale.h"
#include "stdlib.h"

void main()
{
  int a,b,c;
  char sinal;
  setlocale(LC_ALL, "Portuguese");

  printf("\n insira sinal +,-,*,/=" );
  scanf("%s",&sinal);
  printf("\n insira A=" );
  scanf("%d",&a);
  printf("\n insira B=" );
  scanf("%d",&b);

if (sinal == '+')
    {
    c=a+b;
    printf("\n soma = %d",c);
    }
    else
    {

if (sinal == '-')
    {
    c=a-b;

    printf("\n menos = %d",c);
    }
    else
    {

if (sinal == '*')
    {
    c=a*b;

    printf("\n multiplica��o = %d",c);
    }
    else
    {

if (sinal == '/')
    {
    c=a/b;

    printf("\n divis�o = %d",c);
    }
    else
    {
    printf("\n insira um sinal de verdade ");
}
}
}
}
}
