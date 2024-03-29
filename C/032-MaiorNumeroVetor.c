
#include <stdio.h>
void main()
{
int a[]={2,12,34,77,3};
int i,c;
c=0;
for(i=0;i<=4;i++){

if(a[i]>c){
c=a[i];
}
}
printf("%d",c);
}

