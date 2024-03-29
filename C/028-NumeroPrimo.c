#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    int num, cont = 1, status = 0;

    printf("Insira um número: ");
    scanf("%d", &num);

    while (cont <= num) {
        if (num % cont == 0) {
            status++;
        }
        cont++;
    }

    if (status == 2) {
        printf("Número primo\n");
    } else {
        printf("Não é número primo\n");
    }
}
