#include <stdio.h>

int main() 
{
float marks[5];
float sum = 0.0, average;
int i;
printf("Enter marks for 5 subjects (out of 100):\n");
for (i = 0; i < 5; i++) 
{
printf("Subject %d: ", i + 1);
if (scanf("%f", &marks[i]) != 1) {
printf("Invalid input. Please enter numbers only.\n");
return 1;
}
if (marks[i] < 0 || marks[i] > 100) 
{
printf("Error: Marks must be between 0 and 100.\n");
return 1;
}
sum += marks[i];
}
average = sum / 5.0;
printf("\nAverage Marks: %.2f\n", average);
if (average >= 70.0) 
{
printf("Grade: 1st Class\n");
} 
else if (average >= 50.0) 
{
printf("Grade: 2nd Class\n");
} 
else 
{
printf("Grade: Fail\n");
}
return 0;
}
