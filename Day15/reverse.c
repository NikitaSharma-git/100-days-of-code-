//Write a program to reverse a given number.
#include <stdio.h>

int main() {
    int num, rev = 0, rem;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    int original = num;  // keep a copy of the original number

    // Reverse the number (using only math)
    while (num > 0) {
        rem = num % 10;          
        rev = rev * 10 + rem;    
        num = num / 10;          
    }

    printf("Reverse of %d = %d\n", original, rev);

    return 0;
}
