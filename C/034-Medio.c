
#include <stdio.h>
void main()
{
int a[]={1,2,3,4,5};
int i,c,media;
c=0;

for(i=0;i<=5;i++){
c=c+a[i];
}
media=c/5;
printf("\n  %d ",media);
}

