//Write a program to check if a number is an Armstrong number.
#include <stdio.h>

int main() {
    int num, original, rem, n = 0;
    int result = 0;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    // Count number of digits
    int temp = num;
    while (temp > 0) {
        n++;
        temp = temp / 10;
    }

    // Calculate sum of digits^n (using integer power)
    temp = num;
    while (temp > 0) {
        rem = temp % 10;

        int power = 1;
        for (int i = 0; i < n; i++) {
            power *= rem;
        }

        result += power;
        temp = temp / 10;
    }

    // Check Armstrong
    if (result == original)
        printf("%d Armstrong.\n", original);
    else
        printf("%d  NOT  Armstrong .\n", original);

    return 0;
}
