#include <stdio.h>

void main() {
    int a[5][6];
    int linha, coluna;

    // Preencher a matriz
    for (linha = 0; linha < 5; linha++) {
        for (coluna = 0; coluna < 6; coluna++) {
            a[linha][coluna] = linha;
        }
    }

    // Mostrar a matriz na tela
    for (linha = 0; linha < 5; linha++) {
        for (coluna = 0; coluna < 6; coluna++) {
            printf("\t%d", a[linha][coluna]);
        }
        printf("\n");
    }
}

