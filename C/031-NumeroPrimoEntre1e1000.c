#include <stdio.h>
#include <locale.h>

void main() {
setlocale(LC_ALL, "Portuguese");
int  num, cont, status;

for(num = 0; num <= 1000; num++) {
cont = 1;
status = 0;

while(cont <= num) {
	if(num % cont == 0) {
	status++;
		 }
		 cont++;
		}
if(status == 2) {
	printf("\n %d-� primo ", num);
		}
 else{
	printf("\n %d-N�o � primo ", num);
        }
}
}
