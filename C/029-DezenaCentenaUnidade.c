#include "stdio.h"
#include "stdlib.h"
#include "locale.h"

void main()
{
 int a , b , c ;
 a=0;  b=0;  c= 0;

    while (c <= 9) {
	 while (b <= 9) {
		while (a <= 9) {
			printf("\n %d %d %d", c, b, a);
			 a++;
				}
			a = 0;
			b++;
				}
        b = 0;a = 0;c++;
}
    return 0;
}
