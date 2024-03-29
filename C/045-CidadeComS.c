#include <stdio.h>
#include <string.h>
#include "locale.h"

int main()
{
 setlocale(LC_ALL, "Portuguese");
char nomes[5][40];
int aux = 0;
for (int i = 0; i < 5; i++) {
printf("Insira o nome %d: ", i + 1);
	scanf("%s", nomes[i]);
	}

printf("\nNomes que começam com 'S':\n");

	for (int i = 0; i < 5; i++) {

	if (nomes[i][0] == 'S' || nomes[i][0] == 's') {
	printf("%s\n", nomes[i]);
	aux++;
	}
}
printf("São %d com o começo da letra S",aux);


    return 0;
}






