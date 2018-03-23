#include<stdio.h>
#include<string.h>
void main()
{
	char s[100],r[100];
	int i,count,end=0;
    gets(s);
while (s[count] != '\0')
      count++;
      end=count-1;
	for(i=0;i<count;i++)
	{
	r[i]=s[end];
	end--;
	}
	r[i]='\0';
	printf("%s".,r);
}
