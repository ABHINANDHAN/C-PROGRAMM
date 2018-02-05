#include <stdio.h> 
#include<conio.h>
void main()
{
int i,n,d;
printf("enter the limits");
scanf("%d",n);
printf("\n enter the number");
scanf("%d",d); 
printf("\n The numbers divisible by %d are :\n", d) ; 
for(i=1;i<=n;i++) 
if(i%d==0) 
printf("%d\t",i) ; 
return 0 ; 
}
