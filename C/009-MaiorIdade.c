#include"stdio.h"
#include"locale.h"
void main()
{
  float a;

  printf("\nINFORME IDADE:" );
  scanf("\n %f",&a);
    if(18<=a){

    printf("maior de idade");
    }
    else
    {
        printf("menor de idade");
    }
}
