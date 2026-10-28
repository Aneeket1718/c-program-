#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
char str1[20],str2[20];
int ch,i,j;
do
{
printf("\t MENU");
printf("\n---------\n"); printf("1.Find length of string");
printf("\n 2:Concatenate Strings");
printf("\n 3:Copy String");
printf("\n 4:Compare Strings");
printf("\n 5:Exit");
printf("\n---------\n"); printf("\n Enter your choice: ");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("Enter String: ");
scanf("%s",str1);
i=strlen(str1);
printf("Length of string:%d\n\n",i); break;
case 2:
printf("\n Enter First String:");
scanf("%s",str1);
printf("Enter second string:");
scanf("%s",str2);
strcat(str1,str2);
printf("String after concatenation:%s\n\n",str1); break;
case 3:
printf("Enter a string 1:");
scanf("%s",str1);
printf("Enter a string 2:");
scanf("%s",str2);
printf("\n string before copied:\n string 1=\"%s\",string 2=\"%s\"n",str1,str2);
strcpy(str2,str1);
case 4:
printf("Enter First String: ");
scanf("%s", str1);
printf("Enter Second String: ");
scanf("%s", str2);
i = strcmp(str1, str2);
if (i == 0)
printf("Both strings are equal.\n\n");
else if (i < 0)
printf("String 1 is smaller than String 2.\n\n");
else
printf("String 1 is greater than String 2.\n\n");
break;
case 5:
printf("Exiting the program...\n");
break;
default:
printf("Invalid Choice! Please try again.\n\n");
}
}
 while (ch != 5);
return 0;
}


