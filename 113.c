#include<stdio.h>
void main()
{
int n,k,a[110],i,count=0;
scanf("%d%d",&n,&k);
for(i=o;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]==k)
{
count++;
}
}
printf("%d occurs %d time.",k,count);
}
