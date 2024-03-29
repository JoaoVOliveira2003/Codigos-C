#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>

int main() {
    int i;
    char string[100];
    FILE *fp;
    fp=fopen("arquivo.txt","w");
    if(!fp){
        printf("erro na gravação");
        exit(1);
    }
    printf("escreva o que deseja ler");
    gets(string);
    for(i=0;string[i],i++)
        putc(string[i],fp);
    fclose(pa);
    getchar();

    return 0;
}
