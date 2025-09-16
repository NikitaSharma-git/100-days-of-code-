//Write a program to find the LCM of two numbers.
#include <stdio.h>

int main() {
    int num1, num2, a, b, temp, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    a = num1;
    b = num2;

    // Find HCF
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    // LCM formula
    lcm = (num1 * num2) / a;

    printf("LCM of %d and %d is %d\n", num1, num2, lcm);

    return 0;
}
