#include <stdio.h>
#include<string.h>
int main() 
{
	int n,m,sum;
	scanf("%d %d",&n,&m);
	sum=n-m;
	if(sum%2==0)
	printf("even.");
	else
	printf("odd.");
	return 0;
}
