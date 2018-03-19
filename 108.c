#include<stdio.h>
int main()
{
	int b,a,c,i,sum=0;
	printf("enter no.of.elements in ap series: ");
	scanf("%d",&a);
	printf("enter starting number: ");
	scanf("%d",&b);
	printf("enter the difference ");
	scanf("%d",&c);
	for(i=0;i<a;i++)
	{
		sum=sum+b;
		b=b+c;
		
	}
	printf("%d",sum);
}
