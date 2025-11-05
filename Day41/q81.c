//Count characters in a string without using built-in length functions.
#include <stdio.h>

int main() {
    char str[100];
    int count = 0, i = 0;

    printf("Enter a string: ");
    gets(str); // or use fgets(str, 100, stdin);

    while(str[i] != '\0') {
        count++;
        i++;
    }

    printf("Number of characters = %d\n", count);

    return 0;
}
