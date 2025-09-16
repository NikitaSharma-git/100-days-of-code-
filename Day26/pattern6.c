//Write a program to print the following pattern:
//     5
//    45
//   345
//  2345
// 12345
#include <stdio.h>

int main() {
    int n = 5;

    for (int i = n; i >= 1; i--) {           // rows
        // print spaces
        for (int s = 1; s < i; s++) {
            printf(" ");
        }
        // print numbers
        for (int j = i; j <= n; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}


