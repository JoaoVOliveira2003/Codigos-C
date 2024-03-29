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

  if( a>b && b>c )//1
    {
        printf("A=%d,B=%d,C=%d",a,b,c);
    }
    if( a>c && c>b )//2
    {
        printf("A=%d,C=%d,B=%d",a,c,b);
    }
    if( b>a && a>c )//3
    {
        printf("B=%d,A=%d,C=%d",b,a,c);
    }
    if( b>c && c>a )//4
    {
        printf("B=%d,C=%d,A=%d",b,c,a);
    }
    if( c>a && a>b )//5
    {
        printf("C=%d,A=%d,B=%d",c,a,b);
    }
    if( c>b && b>a )//6
    {
        printf("C=%d,B=%d,A=%d",c,b,a);
    }
}

