
#include"stdio.h"
#include "locale.h"
#include "stdlib.h"

void main()
{
 setlocale(LC_ALL, "Portuguese");

 int a,desconto;
 float preco,precofinal;

printf("\insira pre�o do produto= ");
 scanf("%f",&preco);
 printf("\insira o qual op��o = ");
 scanf("%d",&a);


 switch(a)
 {
         case 1 :
        {
        printf("\n � vista em dinheiro ou cheque, recebe 10%% de desconto ");

        desconto=preco/10;
        precofinal=preco-desconto;

        printf("\n pre�o final � :%0.2f",precofinal);
        break;
        }

        case 2:
         {
        desconto=preco/100;
        precofinal=preco-(15*desconto);

        printf("\n � vista no cart�o de cr�dito, recebe 15%% de desconto ");
        printf("\n pre�o final � :%0.2f",precofinal);

        break;
         }
        case 3:
         {
        precofinal=preco/2;
        printf("\n Em duas vezes, pre�o normal de etiqueta sem juros");
        printf("\n pre�o final � :%0.2f",preco);
        printf("\n Por�m duas vezes de :%0.2f",precofinal);
        break;
         }
        case 4:
        {
        desconto=preco/100;
        precofinal=preco+(10*desconto);

        printf("\n4 Em duas vezes, pre�o normal de etiqueta mais juros de 10%% ");
        printf("\n pre�o final � :%0.2f",precofinal);
        }


         default:
        {
        printf("C�digo inv�lido");
        }
 }
 }

