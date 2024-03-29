#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    char operador;
    int a, b, resultado;
    printf("\n CALCULADORA");
    printf("\n ------");
    printf("\n + para adição, - para subtração, * para multiplicação, / para divisão");
    printf("\n Insira A-");
    scanf("%d", &a);
    printf("\n Insira B-");
    scanf("%d", &b);
    printf("\n Insira o operador-");
    scanf(" %c", &operador);
    if (operador == '+') {
        resultado = soma(a,b);
    } else if (operador == '-') {
        resultado = menos(a,b);
    } else if (operador == '*') {
        resultado = vezes(a,b);
    } else if (operador == '/') {
        resultado = divisao(a,b);
    }

    else {
        printf("Erro: Operador inválido");
        return 1;
    }

  printf("%d %c %d = %d\n", a, operador, b, resultado);
    return 0;  // Sair com sucesso
}
int soma(int i,int y){
int resul;
resul=i+y;
return(resul);
}

int menos(int i,int y){
int resul;
resul=i-y;
return(resul);
}

int vezes (int i,int y){
int resul;
resul=i*y;
return(resul);
}

int divisao (int i,int y){
int resul;
resul=i*y;
return(resul);
}
