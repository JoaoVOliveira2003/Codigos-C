#include <stdio.h>
#include <stdlib.h>


int main(){
    char *c; //o ponreiro para o espaço alocado
    c = ( char *)malloc(1); //alocando um unico byte na memoria
    *c = 'd'; // carregando um valor  na região de memroia alocada
    printf("\n Conteudo da variavel: %c", *c);
    printf("\n Endereco de memoria variavel : %x", &c);
    free(c); //liberar espaço
}


