#include <stdio.h>
#include<stdio.h>
int main(void) 
{
	int i,m;
	char b[10];
	scanf("%s",b);
	m=strlen(b);
	for(i=0;i<m;i++)
	{
		printf("\n %c",b[i]);
	}
	return 0;
}
