#include<stdio.h>
int main()
{
int num=10,i,sum=1,temp;

for(i=1;i<=num;i++)
{
temp=sum*i;
sum=temp;
}
printf("%d".,temp);
return 0;
}
