//2) Escreva um programa que pergunte o dia, m�s e ano do anivers�rio de uma pessoa e
//diga se a data � v�lida ou n�o. Caso n�o seja, diga o motivo.
//Considere que os meses 1,3,5,7,8,10 e 12 tem 31 dias
//Considere que os meses 4,6,9 e 11 tem 30 dias
//Considere que o m�s 2
//se for ano bisexto tem 29 dias
//se n�o for ano bisexto ter� 28 dias
//Considere que ano deve ser inferior a 2023 e superior a 1900

#include"stdio.h"
#include "locale.h"
#include "stdlib.h"

void main()
{

 setlocale(LC_ALL, "Portuguese");
    int dia,mes,ano;

  printf("\nINFORME VALOR dia:" );
  scanf("\n %d",&dia);
  printf("\nINFORME VALOR mes:" );
  scanf("\n %d",&mes);
  printf("\nINFORME VALOR ano:" );
  scanf("\n %d",&ano);

  if((dia>=1) && (dia<=31) && (mes<=12)  && (mes>=1) && (ano<=2003) )
    {
        printf("data valida");
    }
    else
    {
        printf("data invalida");
    }
}


