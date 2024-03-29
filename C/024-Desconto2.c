
#include"stdio.h"
#include "locale.h"
#include "stdlib.h"

void main()
{
 setlocale(LC_ALL, "Portuguese");

 int a,desconto;
 float preco,precofinal;

printf("\insira preço do produto= ");
 scanf("%f",&preco);
 printf("\insira o qual opção = ");
 scanf("%d",&a);


 switch(a)
 {
         case 1 :
        {
        printf("\n À vista em dinheiro ou cheque, recebe 10%% de desconto ");

        desconto=preco/10;
        precofinal=preco-desconto;

        printf("\n preço final é :%0.2f",precofinal);
        break;
        }

        case 2:
         {
        desconto=preco/100;
        precofinal=preco-(15*desconto);

        printf("\n À vista no cartão de crédito, recebe 15%% de desconto ");
        printf("\n preço final é :%0.2f",precofinal);

        break;
         }
        case 3:
         {
        precofinal=preco/2;
        printf("\n Em duas vezes, preço normal de etiqueta sem juros");
        printf("\n preço final é :%0.2f",preco);
        printf("\n Porém duas vezes de :%0.2f",precofinal);
        break;
         }
        case 4:
        {
        desconto=preco/100;
        precofinal=preco+(10*desconto);

        printf("\n4 Em duas vezes, preço normal de etiqueta mais juros de 10%% ");
        printf("\n preço final é :%0.2f",precofinal);
        }


         default:
        {
        printf("Código inválido");
        }
 }
 }

