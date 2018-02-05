#include<stdio.h>
void main()
{
int num,sum=0;result,digit;
printf("\n enter the number:");
scanf("%d",&num);
result=num;
while(num!=0)
{
digit=num%10;
sum=sum+digit*digit*digit;
num=num/10;
}
if(result==sum)
{
printf("\n yes");
}
else
{
printf("\n no");
}
getch();
}
