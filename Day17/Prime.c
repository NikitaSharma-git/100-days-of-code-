//Write a program to check if a number is prime.
#include <stdio.h>

int main() {
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("%d NOT prime \n", num);
    } else {
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                printf("%d NOT prime \n", num);
                return 0;  // exit program
            }
        }
        printf("%d prime.\n", num);
    }

    return 0;
}
