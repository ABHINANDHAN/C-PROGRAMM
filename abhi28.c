#include<stdio.h>
void main()
{
int a[10],i,n;

printf("n=");

	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("\n%d\t%d",a[i],i);
	}
	return 0;
}
