#include <stdio.h>
#include <string.h>

int main() {
    char frase[60];
    int i;
    printf("Insira uma frase: ");
    gets(frase);

    for (i = 0; i < strlen(frase); i++) {
        if (frase[i] == 'a') {
            frase[i] = '2';
        } else if (frase[i] == 'e') {
            frase[i] = '3';
        } else if (frase[i] == 'i') {
            frase[i] = '4';
        } else if (frase[i] == 'o') {
            frase[i] = '5';
        } else if (frase[i] == 'u') {
            frase[i] = '6';
        }    }
printf("Frase convertida: %s\n", frase);
    return 0;
}
