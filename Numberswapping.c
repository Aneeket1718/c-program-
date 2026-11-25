#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;  // Store the value at address x
    *x = *y;        // Copy the value at address y into address x
    *y = temp;      // Copy the original value of x into address y
}

int main(void) {
    int a, b;

    printf("Enter two integers: ");
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Pass the memory addresses of a and b
    swap(&a, &b);

    printf("After swapping:  a = %d, b = %d\n", a, b);

    return 0;
}
