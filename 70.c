#include<stdio.h>
int main(void)
{
int n,c=0,x=1,p=2,i;
printf("Enter the number");
scanf("%d",&n);
while(n!=1)
{
n=n/2;
c++;
}
for(i=0;i<c+1;i++)
{
x=x*p;
}
printf("The nearest greater power of 2 is:%d",x);
return 0;
}
