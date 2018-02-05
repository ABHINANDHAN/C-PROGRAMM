#include<stdio.h>
void main()
{
    int i,b,d=1;
    printf("\n Enter the table value");
    scanf("%d",&b);
    for(i=1;i<=b;i++)
    d=d*i;
    printf("FACTORIAL VALUE:%d",d);
}
