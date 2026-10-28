#include<stdio.h>
void main() {
int ch;
float a,b,c,d,e,f;
while(1)
{
printf("-----Basic Arithemetic Operations-----\n");
printf("1. addition\n");
printf("2.subtraction\n");
printf("3.multiplication\n");
printf("4.division\n");
printf("5.exit\n");
printf("Enter your choice: ");
scanf("%d",&ch);
if(ch==5)
printf("Enter two numbers: ");
scanf("%f %f",&a,&b);
switch (ch)
{
case 1:
c=a+b;
printf("%f",c);
case 2:
d=a-b;
printf("%f",d);
case 3:
e=a*b;
printf("%f",e);
case 4:
f=a/b;
printf("%f",f);
break;
case 5:
printf("Invalid choice.\n");
}}}




