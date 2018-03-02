#include<stdio.h>
int main(void)
{
    int n,o,m,i;
    printf("Enter the numbers");
    scanf("%d%d",&n,&o);
    m=n*o;
    for(i = 0; i <= n; i++)
    {
        if (m == i * i)
        {
            printf("YES");
            return 0;
        }
    }
    printf("NO");
    return 0;
}
