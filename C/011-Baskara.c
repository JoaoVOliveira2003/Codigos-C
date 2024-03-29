#include <stdio.h>
#include <math.h>

void main()
{
    int a, b, c, delta;
    float xlinha, x2linha;

    printf("Informar A:");
    scanf("%d", &a);
    printf("Informar B:");
    scanf("%d", &b);
    printf("Informar C:");
    scanf("%d", &c);

    delta = (b * b) - (4 * a * c);
    printf("\n delta: %d", delta);

    if (delta >= 0) {
        xlinha = ((-1 * b) + sqrt(delta)) / (2 * a);
        x2linha = ((-1 * b) - sqrt(delta)) / (2 * a);

        printf("\n raiz 1: %f", xlinha);
        printf("\n raiz 2: %f", x2linha);
    } else {
        printf("\n As raízes não são reais.");
    }
}
