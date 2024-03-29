#include "stdio.h"
#include "time.h"

void main()
{
 int a[10];
int cont,numero,j,status;
cont = 0;

srand((unsigned)time(NULL));

while(cont<10)
{
        numero = (rand()%100)+1;
        status=0;
        j=0;
        while(j<10)
        {
           if(numero == a[j])
           {
               status = 1;// Significa que o numero
               break;
           }
           j++;
        }
        if(status == 1) //
        {
            printf("\nExiste numero repetido:%d vou descartar",numero);
            continue;
        }
        a[cont]=numero;
        printf("\n%d",a[cont]);
        cont = cont + 1;
    }


}

