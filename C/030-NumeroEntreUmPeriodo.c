#include <stdio.h>

void main() {
    int a, b, c;

    printf("Insira A e B, A tem que ser menor\n");
    printf("INFORME A: ");
    scanf("%d", &a);
    printf("INFORME B: ");
    scanf("%d", &c);

    for (b = a; b < c; b++) {
        printf("%d\n", b);
    }
    printf("%d\n", c);
}

