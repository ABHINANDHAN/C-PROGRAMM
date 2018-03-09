#include<stdio.h>
#include<string.h>
int main(void)

{
int k,i,freq[100],count=0;
char ch[100];
scanf("%s",ch);
for(k=0;ch[k]!='\0';++k)
{
	
}
for(i=0;i<26;i++)
{
	freq[i]=0;
}
for(i=0;i<k;i++)
{
	if(ch[i]>='a'&&ch[i]<='z')
	freq[ch[i]-97]++;
	else if(ch[i]>='A'&&ch[i]<='Z')
	freq[ch[i]-65]++;
}
for(i=0;i<26;i++)
{
	if(freq[i]>1){
count++;}
	
}
if(count!=0)
printf("no.");
else
printf("yes.");
	return 0;
}
