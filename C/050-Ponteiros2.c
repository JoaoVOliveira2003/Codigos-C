#include <stdio.h>
#include <stdlib.h>


int main(){
    char *c; //o ponreiro para o espa�o alocado
    c = ( char *)malloc(1); //alocando um unico byte na memoria
    *c = 'd'; // carregando um valor  na regi�o de memroia alocada
    printf("\n Conteudo da variavel: %c", *c);
    printf("\n Endereco de memoria variavel : %x", &c);
    free(c); //liberar espa�o
}


