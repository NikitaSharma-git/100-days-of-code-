//(Nested Loops without Arrays/Strings)
//Write a program to print all the prime numbers from 1 to n.
#include <stdio.h>

int main() {
    int n, i, j, isPrime;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are:\n", n);

    for(i = 2; i <= n; i++) {
        isPrime = 1;  // assume number is prime

        for(j = 2; j < i; j++) {
            if(i % j == 0) {
                isPrime = 0;  // not prime
                break;        // stop checking further
            }
        }

        if(isPrime == 1) {
            printf("%d ", i);
        }
    }

    return 0;
}
