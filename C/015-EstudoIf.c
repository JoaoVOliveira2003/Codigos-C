#include "stdio.h"

void main()

{
    int macaco,num;

    printf("insira numero");
    scanf("%d",&num);

    if(num<0)
    {
        macaco=num*3;
        printf("o numero negativo,multiplicado por 3 vezes é: %d",macaco);
    }
    else
    {
        macaco=num*2;
        printf("numero positivo,multiplicado por 2 :%d",macaco);
    }
}
