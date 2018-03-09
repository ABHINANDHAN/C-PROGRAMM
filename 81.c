#include <stdio.h>
int main() 
{	
    int n1,n2,i;
    for(i=0;i<3;i++)
    {
        scanf("%d %d", &n1,&n2);
        if(n1>n2)
        {
            printf("%d\ n", n1-n2);
        }
        else
        {
            printf("%d\n",n2-n1);
        }
    }
	return 0;
}
