
#include <stdio.h>
#include <locale.h>




int main() {


    setlocale(LC_ALL, "Portuguese");
    int n = 10, m = 10, i, j, k;


    int lista1[n], lista2[m];


    printf("Digite os %d numeros para o primeiro vetor:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &lista1[i]);
    }


    printf("Digite os %d numeros para o segundo vetor:\n", m);
    for (i = 0; i < m; i++) {
        scanf("%d", &lista2[i]);
    }


    int lista3[n+m];




    i = 0;
    j = 0;
    k = 0;
    while (i < n && j < m) {
        lista3[k++] = lista1[i++];
        lista3[k++] = lista2[j++];
    }


    while (i < n) {
        lista3[k++] = lista1[i++];
    }
    while (j < m) {
        lista3[k++] = lista2[j++];
    }


    printf("\nA Primeiro vetor original é: ");
    for (i = 0; i < n; i++) {
        printf("%d ", lista1[i]);
    }




    printf("\nA segundo vetor original é: ");
    for (i = 0; i < m; i++) {
        printf("%d ", lista2[i]);
    }


    printf("\n ");


    printf("\nA O vetor intercalada resultante é: ");
    for (i = 0; i < n+m; i++) {
        printf("%d ", lista3[i]);
    }




    return 0;
}




