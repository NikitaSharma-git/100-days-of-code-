//Write a program to calculate the factorial of a number.
#include <stdio.h>

int main() {
    int n, i;
    int fact = 1;

    // Input 
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        
        for (i = 1; i <= n; i++) {
            fact *= i;
        }
        printf("Factorial of %d = %d\n", n, fact);
    }

    return 0;
}
