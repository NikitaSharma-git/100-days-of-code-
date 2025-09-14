//Write a program to input three numbers and find the largest among them using if–else.

#include <stdio.h>

int main() {
    int a, b, c;

    // Input 
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    //largest
    if (a >= b) {
        if (a >= c) {
            printf("%d is the Largest\n", a);
        } else {
            printf("%d is the Largest\n", c);
        }
    } else {
        if (b >= c) {
            printf("%d is the Largest\n", b);
        } else {
            printf("%d is the Largest\n", c);
        }
    }

    return 0;
}
