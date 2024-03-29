#include"stdio.h"
#include "stdlib.h"

void main()
{
 int a,b;
 char nome[50];
 a = 1;

 printf("\nINFORME VALOR QUANTAS VEZES QUER VER O NOME:" );
 scanf("\n %d",&b);
 printf("\nINFORME O NOME:" );
 scanf("\n %s",&nome);
 while(a<=b)
 {
 printf("\n %s",nome);
a++;
}
}
