//4) Faça um algoritmo que leia dois valores inteiros A e B se os valores forem iguais deverá se somar
//os dois, caso contrário multiplique A por B. Ao final de qualquer um dos cálculos deve-se atribuir o
//resultado para uma variável C e mostrar seu conteúdo na tela.
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
