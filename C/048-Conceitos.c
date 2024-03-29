#include <stdio.h>
int main() {
    char conceito;
    printf("Insira um conceito - ");
    scanf(" %c" ,&conceito);
    switch(conceito){
    case 'a':
    case 'A':
        printf("PLENA");
        break;
    case 'b':
    case 'B':
        printf("PARCIAL PLENO");
        break;
    case 'c':
    case 'C':
        printf("SUFICIENTE");
        break;
    case 'd':
    case 'D':
        printf("INSUFICIENTE");
        break;
    }
}
