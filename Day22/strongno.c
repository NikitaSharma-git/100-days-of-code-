//Write a program to check if a number is a strong number.
#include <stdio.h>

int main() {
    int n, temp, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    while (temp) {
        int d = temp % 10, fact = 1;
        for (int i = 1; i <= d; i++) fact *= i;
        sum += fact;
        temp /= 10;
    }

    printf(sum == n ? "%d is a Strong Number" : "%d is NOT a Strong Number", n);
    return 0;
}
