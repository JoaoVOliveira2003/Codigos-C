//4) Fa�a um algoritmo que leia dois valores inteiros A e B se os valores forem iguais dever� se somar
//os dois, caso contr�rio multiplique A por B. Ao final de qualquer um dos c�lculos deve-se atribuir o
//resultado para uma vari�vel C e mostrar seu conte�do na tela.
#include"stdio.h"

void main()
{
  int a,b,c ;

  printf("\informe a :" );
  scanf("%d",&a);
  printf("\informe b :" );
  scanf("%d",&b);

    if (a==b)
    {

    c=a+b;
    printf("%d",c);

    }
    else
    {
      c=a*b;
    printf("%d",c);
}
}
