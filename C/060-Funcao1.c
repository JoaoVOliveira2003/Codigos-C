#include <stdio.h>
#include <stdlib.h>

int mult(int i){
    int resul;
    resul=i*2;
    return(resul);
}

void main()
{
    int a=10,b=0;
    b=mult(a);
    printf("\n Resultado: %d", b);
}
