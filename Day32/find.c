//(Arrays (1D)) Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main() {
    long long num;
    int freq[10] = {0}; // frequency of digits 0-9
    int digit, i, maxDigit = 0;

    printf("Enter an integer: ");
    scanf("%lld", &num);

    // Handle negative numbers
    if (num < 0) {
        num = -num;
    }

    // Count frequency of each digit
    while (num > 0) {
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    // Find the digit with the maximum frequency
    for (i = 1; i < 10; i++) {
        if (freq[i] > freq[maxDigit]) {
            maxDigit = i;
        }
    }

    printf("The digit that occurs the most is: %d\n", maxDigit);
    printf("It occurs %d times.\n", freq[maxDigit]);

    return 0;
}

