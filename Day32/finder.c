//(Arrays (1D)) Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main() {
    int n;
    int freq[10] = {0}, d, i, maxDigit = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) n = -n;   // handle negatives

    while (n > 0) {
        d = n % 10;      // get last digit
        freq[d]++;       // count digit
        n /= 10;         // remove last digit
    }

    for (i = 1; i < 10; i++) {
        if (freq[i] > freq[maxDigit])
            maxDigit = i;
    }

    printf("Most frequent digit: %d\n", maxDigit);
    printf("It occurs %d times.\n", freq[maxDigit]);

    return 0;
}
