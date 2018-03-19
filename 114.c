#include<stdio.h>
int main()
{
	int n,k,a[100],i,count=0;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	if(a[i]%2!=0)
	{
		count++;
		if(count==2)
		{
			printf("%d".,a[i]);
			return(0);
		}
	}
	}
	return(0);	
}
© 2018 GitHub, Inc.
