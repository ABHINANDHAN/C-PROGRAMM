#include <stdio.h>
void main()
{
int n,count=0,i;
printf("Enter the number");
scanf("%d",&n);
for(i=2;i<n;i++)
{
if((n%i)==0)
{
count++;
}
}
if(count==0)
{
printf("No");
}
else
{
printf("Yes");
}
}
