#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


int pote(int i, int y) {
    int resul = 1;
    for (int aux = 1; aux <= y; aux++) {
        resul *= i;
    }
    return resul;
}


int main() {
    setlocale(LC_ALL, "Portuguese");
    int num, poten, resul;


    printf("\nInforme numero:");
    scanf("%d", &num);
    printf("\nInforme potencia:");
    scanf("%d", &poten);


    resul = pote(num, poten);


    printf("\nA potencia de %d por %d é %d:", num, poten, resul);


    return 0;
}
