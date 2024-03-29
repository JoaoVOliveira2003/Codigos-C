#include <stdio.h>
#include <stdlib.h>

int main(void){
    int * ptr;
    int valor = 10;
    ptr = &valor;

    printf("\n mostrar o endereço da memoria do ponteiro=%x",ptr);
    printf("\n Mostrar o que tem dentro da variavel= %d",*ptr);
}

