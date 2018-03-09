#include <stdio.h>
int main() 
{	
   int a,b,i;
   char c;
   for(i=0;i<4;i++)
   {
       scanf("%d %c %d",&a,&c,&b);
       if(c=='%')
       {
           printf("%d\n", (a%b));
       }
       else
       {
           printf("%d\n", (a/b) );
       }
   }
	return 0;
}
