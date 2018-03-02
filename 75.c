#include<stdio.h>
#include<string.h>
int main(void)
{
    char a[10];
    int n,r;
    printf("Enter the string");
    scanf("%s",a);
    n=strlen(a);
    r=n/2;
    a[r]='*';
    printf("%s",a);
    return 0;
}
