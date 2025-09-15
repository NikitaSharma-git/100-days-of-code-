//Write a program to check if a number is a palindrome.
#include <stdio.h>

int main() {
    int num, original, rem, rev = 0;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;  // keep copy of original number

    // Reverse the number
    while (num > 0) {
        rem = num % 10;          // last digit
        rev = rev * 10 + rem;    // build reversed number
        num = num / 10;          // remove last digit
    }

    // Check palindrome
    if (original == rev)
        printf("%d is a Palindrome.\n", original);
    else
        printf("%d is NOT a Palindrome.\n", original);

    return 0;
}
