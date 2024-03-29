
#include"stdio.h"

void main()
{
  float a,b,c,d,media ;

  printf("\informe a :" );
  scanf("%f",&a);
  printf("\informe b :" );
  scanf("%f",&b);
  printf("\informe c :" );
  scanf("%f",&c);
  printf("\informe d :" );
  scanf("%f",&d);

  media=(a+b+c+d)/4;

    if(6<media){
    printf("\n passou:%f",media);
    }
    else
    {
    printf("\n reprovou:%0.2f",media);

}
