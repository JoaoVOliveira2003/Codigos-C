#include"stdio.h"
#include "locale.h"
void main()
{
 setlocale(LC_ALL, "Portuguese");

 int a;

 printf("\insira o cod�go = ");
 scanf("%d",&a);

 switch(a)
 {
         case 1 :
         {printf("\n Alimento n�o-perec�vel "); break;}
        case 2:
         {printf("\n Alimento perec�vel "); break;}
            case 3:
         {printf("\Alimento perec�vel");break;}
            case 4:
         {printf("Alimento perec�vel ");break;}
            case 5:
         {printf("\Vestu�rio");break;}
            case 6:
         {printf("Vestu�rio ");break;}
            case 7:
         {printf("Higiene Pessoal ");break;}
            case 8:
         {printf("Limpeza e Utens�lios Dom�sticos ");break;}
            case 9:
         {printf("Limpeza e Utens�lios Dom�sticos");break;}
        case 10:
         {printf("Limpeza e Utens�lios Dom�sticos");break;}
         case 11:
         {printf("Limpeza e Utens�lios Dom�sticos ");break;}
         case 12:
         {printf("Limpeza e Utens�lios Dom�sticos ");break;}
         case 13:
         {printf("Limpeza e Utens�lios Dom�sticos");break;}
         case 14:
         {printf("Limpeza e Utens�lios Dom�sticos ");break;}
         case 15:
         {printf("Limpeza e Utens�lios Dom�sticos");break;}
         default:
        {
        printf("C�digo inv�lido");break;
        }
 }
 }

