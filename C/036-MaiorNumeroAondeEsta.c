#include <stdio.h>
#include <stdlib.h>
#include "locale.h"
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int a[5];
    int b = 0;
    int i;
    int aux = 0;

    for (i = 0; i < 5; i++) {
        printf("Informe o n�mero %d: ", i);
        scanf("%d", &a[i]);
    }

    printf("\n-------------------------\n");

    for (i = 0; i < 5; i++) {
        if (a[i] > b) {
            b = a[i];
            aux = i;
        }
    }

    printf("-------------------------\n");
    printf("O maior n�mero � %d na posi��o %d\n", b, aux);

    return 0;
}









