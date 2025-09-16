//Write a program to find the sum of digits of a number.
#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    printf("Sum = %d", sum);
    return 0;
}
