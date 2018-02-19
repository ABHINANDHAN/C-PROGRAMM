 #include <stdio.h>

#include <conio.h>

#include <string.h>

 void main()

{

 char string1[30], string2[20];

 int i, length=0, temp;

  printf(“Enter the 1st String  \n”);

 gets(string1);

 printf(“\nEnter the 2nd String  \n”);

 gets(string2);

  for(i=0; string1[i]!=’\0′; i++)

 length++;

 temp = length;

  for(i=0; string2[i]!=’\0′; i++)

 {

 string1[temp] = string2[i];

 temp++;

 }

 string1[temp] = ‘\0’;

  printf(“\n The final concatenated string is \n”);

 puts(string1);

 getch();

}
