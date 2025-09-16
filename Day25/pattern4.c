//Write a program to print the following pattern:
//5
//45
//345
//2345
//12345
#include <stdio.h>

int main() {
    char row[6];  // to store digits as characters
    for (int i = 5; i >= 1; i--) {
        int k = 0;
        for (int j = i; j <= 5; j++)
            row[k++] = j + '0';
        row[k] = '\0';
        printf("%s\n", row);
    }
    return 0;
}
