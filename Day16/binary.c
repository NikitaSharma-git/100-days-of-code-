//Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>

int main() {
    int num, rem, binary = 0, place = 1;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Binary = 0\n");
    } else {
        while (num > 0) {
            rem = num % 2;             
            binary = binary + rem * place; 
            place = place * 10;      
            num = num / 2;            
        }
        printf("Binary = %d\n", binary);
    }

    return 0;
}
