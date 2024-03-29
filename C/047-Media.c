#include <stdio.h>

int main() {
    float a,b,media;
    printf("Insira a-");
    scanf("%f",&a);
    printf("Insira b-");
    scanf("%f",&b);

    media=(a+b)/2;
    if(media<4){
        printf("Reprovado");
    }
    else if(media>4,1 && media<=7){
        printf("Exame");
    }
    else if(media>7,1 && media<10){
        printf("Aprovado");
    }
}
