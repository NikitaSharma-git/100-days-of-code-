//Write a program to find the product of odd digits of a number.
#include <stdio.h>

int main() {
    int n, d, p = 1, f = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n) {
        d = n % 10;
        if (d % 2) { p *= d; f = 1; }
        n /= 10;
    }
    f ? printf("Product = %d", p) : printf("No odd digits");
    return 0;
}
