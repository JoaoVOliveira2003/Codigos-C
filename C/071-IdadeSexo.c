#include "stdio.h"
#include "stdlib.h"
void main()
{
    char nome[40];
    char sexo;
    char estadocivil[40];
    int tempodecasada;
    printf("Informe Nome:");
    gets(nome);
    printf("Informe Sexo:");
    scanf(" %c",&sexo);
    // fflush, fun��o para limpar o buffer de mem�ria
    fflush(stdin);
    printf("Informe Estado CIVIL:");
    gets(estadocivil);
    if(sexo == 'F')
    {
        // Fun��o para comparar strings
        // Caso retorno seja 0 as strings s�o iguais
        if((strcmp(estadocivil,"CASADA"))==0)
        {
            printf("Informe tempo de Casada:");
            scanf("%d",&tempodecasada);
        }
    }
    else
    {
        printf("N�o � casada");
    }


}







