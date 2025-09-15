//Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>

int main() {
    int n, i;
    int product = 1;   
    int found = 0;    

    // Input
    printf("Enter the value of n: ");
    scanf("%d", &n);

   
    for (i = 2; i <= n; i += 2) {
        product *= i;
        found = 1;
    }

    if (found)
        printf("Product of even numbers from 1 to %d = %d\n", n, product);
    else
        printf("No even numbers in the given range.\n");

    return 0;
}


