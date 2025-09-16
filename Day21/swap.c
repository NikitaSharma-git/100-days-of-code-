//Write a program to swap the first and last digit of a number.
#include <stdio.h>

int main() {
    int n, temp, first, last, pow10 = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    last = n % 10;
    while (temp >= 10) {
        temp /= 10;
        pow10 *= 10;
    }
    first = temp;

    n = (n % pow10) / 10;                  
    printf("Number after swapping = %d", last * pow10 + n * 10 + first);

    return 0;
}

