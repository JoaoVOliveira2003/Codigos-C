#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main() {
    float preco, desconto, opcao, precofinal, metade, precob;

    setlocale(LC_ALL, "Portuguese");

    printf("\n qual sua op��o?=" );
    scanf("%f", &opcao);
    printf("\n qual o pre�o do produto?=" );
    scanf("%f", &preco);

    if (opcao == 1) {
        desconto = preco / 10;
        precofinal = preco - desconto;
        printf("\n o pre�o final � %0.2f", precofinal );
    } else {
        if (opcao == 2) {
            desconto = preco / 20;
            precofinal = preco - (3 * desconto);
            printf("\n o pre�o final � %0.2f", precofinal );
        } else {
            if (opcao == 3) {
                metade = preco / 2;
                printf("\n o pre�o final � 2 vezes de %0.2f", metade );
            } else {
                if (opcao == 4) {
                    metade = preco / 2;
                    precofinal = metade * 1.1;
                    printf("\n o pre�o final � 2 vezes 10%% de desconto ser�: %0.2f", precofinal);
                } else {
                    printf("Op��es erradas");
                }
            }
        }
    }
}
