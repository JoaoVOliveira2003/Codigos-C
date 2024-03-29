//2)DESENVOLVA UM PROGRAMA PARA RESERVAR UMA CADEIRA EM UMA SALA DE CINEMA DE 10 LINHAS E 20 COLUNAS
//O sistema deve

//A) deixar poltrona vazia com 0 e deixar como 1,caso estiver já reservada ai mandar “já reservado
//B)iniciar as poltronas.
//C)mostrar as poltronas que estão enchidas
//D)contabilizar quantas poltronas estão cheias.


//A) deixar poltrona vazia com 0 e deixar como 1,caso estiver já reservada ai mandar “já reservado
//B)iniciar as poltronas.
//C)mostrar as poltronas que estão enchidas
//D)contabilizar quantas poltronas estão cheias


#include <stdio.h>
#include "locale.h"

void main()
{

int linha,coluna,a[5][5],babaca,cont;
char opcao;
babaca=0;
cont=0;

setlocale(LC_ALL, "Portuguese");

while(cont==0){

for(linha=0;linha<5;linha++){
	for(coluna=0;coluna<5;coluna++){
	a[linha][coluna]=0;
	}
}

printf("\n Escolha um dos numeros de baixo para a opção");
printf("\n São 5 colunas e 5 linhas de poltronas");
printf("\n ------------------------------------------");
printf("\n 1-Reiniciar as poltrona.");
printf("\n 2-Escolher uma poltrona para sentar.");
printf("\n 3-Mostrar poltronas ");
printf("\n 4-Contabilizar quantas poltronas estão cheias");
    printf("\n ------------------------------------------");
    printf("\n Insira a opçoes que deseja - ");
    scanf("%d",&opcao);


 switch(opcao)
 {
         case 1:
         {
     for(linha=0;linha<5;linha++){
        for(coluna=0;coluna<5;coluna++){
            a[linha][coluna]=0;
    }
    }
                 break;


         }




         case 2:
{
    printf("\n \nInsira qual coluna você deseja sentar: ");
    scanf("%d", &coluna);
    printf("\n Insira qual linha você deseja sentar: ");
    scanf("%d", &linha);


    if (a[linha][coluna] == 1) {
        printf("\n Poltrona já reservada");
    } else {
        a[linha][coluna] = 1;
    }


        break;


         }

         case 3:
         {
        for(linha=0;linha<5;linha++){
            for(coluna=0;coluna<5;coluna++){
                printf(" \n a[%d][%d]-%d",linha,coluna,a[linha][coluna]);
           }
         }


         case 4:
         {
         for(linha=0;linha<5;linha++){
        for(coluna=0;coluna<5;coluna++){
          if(a[linha][coluna]=0){
            babaca++;
          }
    }
    }
        printf("\n tem %d cheias",babaca);
             break;
         }




    printf("\n ------------------------------------------");








     // for(linha=0;linha<10;linha++){
     // for(coluna=0;coluna<20;coluna++){
       //      printf(" a[%d][%d]-%d",linha,coluna,a[linha][coluna]);
         //   }
         //}
}
}
printf("\n Deseja continuar? Digite S ou N: ");
scanf(" %c", &opcao);


if (opcao == 'S' || opcao == 's') {
    cont = 0;
} else {
    cont = 23 + 1;
}
}
}
