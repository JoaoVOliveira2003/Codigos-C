#include <stdio.h>

int mult (int i){
    int resultado;
    resultado=i*2;
    return(resultado);
}

int soma(int i,int y){
    int resultado;
    resultado=i+y;
    return(resultado);
}

void main(){
    int a=10,b=0,d=0,c=1;
    b=mult(a);
    d=soma(a,c);
    printf("\n Resultado da multiplicação : %d",b);
    printf("\n Resultado da soma: %d",d);
}

