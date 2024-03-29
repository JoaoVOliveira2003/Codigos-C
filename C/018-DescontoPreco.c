#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main() {
    float preco, desconto, opcao, precofinal, metade, precob;

    setlocale(LC_ALL, "Portuguese");

    printf("\n qual sua opção?=" );
    scanf("%f", &opcao);
    printf("\n qual o preço do produto?=" );
    scanf("%f", &preco);

    if (opcao == 1) {
        desconto = preco / 10;
        precofinal = preco - desconto;
        printf("\n o preço final é %0.2f", precofinal );
    } else {
        if (opcao == 2) {
            desconto = preco / 20;
            precofinal = preco - (3 * desconto);
            printf("\n o preço final é %0.2f", precofinal );
        } else {
            if (opcao == 3) {
                metade = preco / 2;
                printf("\n o preço final é 2 vezes de %0.2f", metade );
            } else {
                if (opcao == 4) {
                    metade = preco / 2;
                    precofinal = metade * 1.1;
                    printf("\n o preço final é 2 vezes 10%% de desconto será: %0.2f", precofinal);
                } else {
                    printf("Opções erradas");
                }
            }
        }
    }
}
