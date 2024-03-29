#include <stdio.h>

void main()
{
int a[]={1,2,3,4,5};
int b,i,c,media;
c=0;
b=0;

for(i=0;i<=5;i++){
c=c+a[i];
}
media=c/5;
printf("\n A media é-%d ",media);

for(i=0;i<=5;i++){

	if(media<a[i]){
	printf("\n vetor(%d)- %d  esta a cima da media",i,a[i]);
	b++;
}
}
printf("\n numeros a cima da media-%d",b);
}
















