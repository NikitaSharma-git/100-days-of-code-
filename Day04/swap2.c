//Write a program to swap two numbers without using a third variable.
#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    // Before swapping
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swapping without a third variable
    a = a + b;  
    b = a - b;  
    a = a - b; 

    // After swapping
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}

