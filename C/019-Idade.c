#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main() {
    int num;

    setlocale(LC_ALL, "Portuguese");

    printf("\n Qual � a sua idade? = ");
    scanf("%d", &num);

    if (num < 15) {
        printf("\n Voc� n�o pode votar.");
    } else {
        if (num < 18) {
            printf("\n Voc� pode votar.");
        } else {
            if (num < 66) {
                printf("\n Voc� deve votar.");
            } else {
                if (num < 150) {
                    printf("\n Voc� pode votar.");
                } else {
                    printf("Op��es inv�lidas.");
                }
            }
        }
    }
}
