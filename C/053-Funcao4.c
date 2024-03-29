#include <stdio.h>

void conta (int i){
while ( i < 10){
    printf("\n Valor é na função - %d",i++);
}
}

void main(){
    int i=2;
    conta(i);
    printf("\n valor de I na main %d",i);
}
