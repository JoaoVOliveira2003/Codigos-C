#include"stdio.h"
#include "locale.h"
void main()
{
 setlocale(LC_ALL, "Portuguese");

 int a;

 printf("\insira o codígo = ");
 scanf("%d",&a);

 switch(a)
 {
         case 1 :
         {printf("\n Alimento não-perecível "); break;}
        case 2:
         {printf("\n Alimento perecível "); break;}
            case 3:
         {printf("\Alimento perecível");break;}
            case 4:
         {printf("Alimento perecível ");break;}
            case 5:
         {printf("\Vestuário");break;}
            case 6:
         {printf("Vestuário ");break;}
            case 7:
         {printf("Higiene Pessoal ");break;}
            case 8:
         {printf("Limpeza e Utensílios Domésticos ");break;}
            case 9:
         {printf("Limpeza e Utensílios Domésticos");break;}
        case 10:
         {printf("Limpeza e Utensílios Domésticos");break;}
         case 11:
         {printf("Limpeza e Utensílios Domésticos ");break;}
         case 12:
         {printf("Limpeza e Utensílios Domésticos ");break;}
         case 13:
         {printf("Limpeza e Utensílios Domésticos");break;}
         case 14:
         {printf("Limpeza e Utensílios Domésticos ");break;}
         case 15:
         {printf("Limpeza e Utensílios Domésticos");break;}
         default:
        {
        printf("Código inválido");break;
        }
 }
 }

