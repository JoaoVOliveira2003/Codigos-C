#include <stdio.h>
#include <stdlib.h>
void main() {

int cont, a[10];
cont = 0;

srand((unsigned)time(NULL));
while(cont < 10) {
a[cont] = rand() % 100;
printf("\n %d ", a[cont]);
cont = cont + 1;
}
return 0;
}

