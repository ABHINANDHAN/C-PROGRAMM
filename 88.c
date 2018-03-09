#include<stdio.h>

int main(void)

{
int x,y;

scanf("%d %d",&x,&y);
int temp=x,temp1=y;
if(x==0)
{
	printf("%d", y);
	
}
else
{
	while(x!=0&&y!=0)
	{
		if(x>y)
		x=x-y;
		else
		y=y-x;
	}
	printf("%d",(temp*temp1)/x);
}
	return 0;
}
