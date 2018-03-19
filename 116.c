#include<stdio.h>
#include<string.h>
int main(void)
{
    char str1[20],str2[20];
    int a1,a2;
    scanf("%d",&a1);
    scanf("%d",&a2);
    sprintf(str1 , "%d" ,a1);
    sprintf(str2 , "%d" ,a2);
    printf("%s".,str1);
    printf("%s".,str2);
    return 0;
}
