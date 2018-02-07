#include<stdio.h>
void main()
{
  int count=0,l,i;
  char a[100000];
  printf("\nenter the paragraph :");
  gets(a);
  l=strlen(a);
  for(i=0;i<=l;i++)
  {
  
   if(a[i]=='.')
   count++;
   
  }
  printf("\nthe no.of lines in the para :%d",count+1);
}
