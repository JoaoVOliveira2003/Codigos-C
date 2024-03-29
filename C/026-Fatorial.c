#include <stdio.h>


int main() {
    int tamanho = 12;
    int vetor[tamanho],primeironumero=103;
    int i, j, fatorial, soma = 0;


    for (i = 0; i < tamanho; i++) {
        vetor[i] = primeironumero - (i * 3);
    }


    printf("Soma dos fatoriais:\nS = ");
    for (i = 0; i < tamanho; i++) {
        fatorial = 1;


        for (j = 1; j <= i; j++) {
            fatorial *= j;
        }
        soma += vetor[i]/fatorial;
        printf("(%d/%d!) + ", vetor[i], i);
    }


    printf("\b\b= %d\n", soma);


    return 0;
}









