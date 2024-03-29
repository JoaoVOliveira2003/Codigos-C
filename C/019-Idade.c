#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main() {
    int num;

    setlocale(LC_ALL, "Portuguese");

    printf("\n Qual é a sua idade? = ");
    scanf("%d", &num);

    if (num < 15) {
        printf("\n Você não pode votar.");
    } else {
        if (num < 18) {
            printf("\n Você pode votar.");
        } else {
            if (num < 66) {
                printf("\n Você deve votar.");
            } else {
                if (num < 150) {
                    printf("\n Você pode votar.");
                } else {
                    printf("Opções inválidas.");
                }
            }
        }
    }
}
