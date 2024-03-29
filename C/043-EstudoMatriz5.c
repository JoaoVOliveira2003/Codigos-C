
#include <stdio.h>


void main()
{
    int a[3][2],b[3][2],c[3][2],linha,coluna;




    for(linha=0;linha<3;linha++){
      for(coluna=0;coluna<2;coluna++){
        printf("Insira valor a[%d][%d]-",linha,coluna);
        scanf("%d",&a[linha][coluna]);
    }
    }
     printf("\n---------------------------------------------------------------");




    for(linha=0;linha<3;linha++){
      for(coluna=0;coluna<2;coluna++){
        printf("Insira valor B[%d][%d]-",linha,coluna);
        scanf("\n %d",&b[linha][coluna]);
    }
    }


    for(linha=0;linha<3;linha++){
      for(coluna=0;coluna<2;coluna++){
        c[linha][coluna]=b[linha][coluna]+a[linha][coluna];
    }
    }


 printf("\n ---------------------------------------------------------------");


  for(linha=0;linha<3;linha++){
      for(coluna=0;coluna<2;coluna++){
         printf("\n Insira valor C[%d][%d]-%d",linha,coluna,c[linha][coluna]);
       }
    }
}
