#include <stdio.h>

int main() 
{
int year;
printf("Enter a year: ");
if (scanf("%d", &year) != 1) 
printf("Invalid input. Please enter a valid integer year.\n");
return 1;
}
if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
{
 printf("%d is a leap year (366 days).\n", year);
} 
 else 
{
 printf("%d is a standard year (365 days).\n", year);
}
return 0;
}
