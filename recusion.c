#include <stdio.h>

int fact_loop(int num);
int fact_loop(int );   

int main()
{
    int num;
    int result;

    printf("Enter the number :");
    scanf("%d", &num);

    result = fact_loop(num); 
    printf("Result = %d \n", result);

    return 0;
}

int fact_loop(int n)
{
    int i, ans = 1;
    for (i = 1; i <= n; i++)
    {
        ans = ans * i; 
    
    return ans;
}
