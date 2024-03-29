

#include"stdio.h"
#include "locale.h"
#include "stdlib.h"

void main()
{

 setlocale(LC_ALL, "Portuguese");
    int a,b,c;

  printf("\n Informe A:" );
  scanf("\n %d",&a);
  printf("\n Informe B:" );
  scanf("\n %d",&b);
  printf("\n Informe C:" );
  scanf("\n %d",&c);
  if((a>b && a>c ))
    {
        printf("o A é o maior");
    }
    if((b>a && b>c ))
    {
        printf("o B é o maior");
    }
    if((c>b && c>a ))
    {
        printf("o C é o maior");
    }
}
