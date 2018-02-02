#include<stdio.h>
int main()
{
int num,m,n;
printf("\nEnter the number:",m);
scanf("%d",&m);
printf("\nEnter the number",n);
scanf("%d",&n);
for(num=m,num<=n,num++)
{
if(num%2==1)
printf("%d",num);
}
getch();
}
