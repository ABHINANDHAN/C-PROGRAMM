#include<stdio.h>
main()
{
int a,b,c;
printf("\n enter the value of a:");
scanf("%d",&a);
printf("\n enter the value of b:");
scanf("%d",&b);
printf("\n enter the value of c");
scanf("%d",&c);
if(a>b)
{
printf("\n %d is greater",a);
}
else if(b>c)
{
printf("\n %d is greater",b);
}
else if(a>c)
{
printf("\n %d is greater",a);
}
else
{
printf("\n %d is greater",c);
}
return 0;
}
