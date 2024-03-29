
#include <locale.h>


int search(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}


void main( ) {


    setlocale(LC_ALL, "Portuguese");


    int n=5;
    int vet[n];


    printf("Digite os valores do vetor:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vet[i]);
    }


    int x;


    printf("Digite o valor a ser procurado: ");
    scanf("%d", &x);


    int result = search(vet, n, x);


    if (result == -1) {
        printf("Valor não encontrado!\n");
    } else {
        printf("Valor encontrado na posicao %d do vetor.\n", result);
    }
    return 0;
}






