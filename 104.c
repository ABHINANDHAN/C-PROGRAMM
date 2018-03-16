#include<stdio.h>
#include<conio.h>
int main()
{
 int num1,num2,power;
 printf("enter the number");
 scanf("%d\n%d\n",&num1,&num2);
 power=pow(num1,num2);
 printf("the power of given two number is %d",power);
 getch();
 return 0;
 }
