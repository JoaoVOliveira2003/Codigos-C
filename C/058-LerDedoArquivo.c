#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc,char *argv[]) {
    FILE *f = fopen("arquivo.txt","r");
    int i;
    while(fscanf(f,"%d",&i)==1){
        printf("%d \n",i);
    }
    fclose(f);
}
