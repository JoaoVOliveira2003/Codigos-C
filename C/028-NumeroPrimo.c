#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    int num, cont = 1, status = 0;

    printf("Insira um n�mero: ");
    scanf("%d", &num);

    while (cont <= num) {
        if (num % cont == 0) {
            status++;
        }
        cont++;
    }

    if (status == 2) {
        printf("N�mero primo\n");
    } else {
        printf("N�o � n�mero primo\n");
    }
}
