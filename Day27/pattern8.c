//Write a program to print the following pattern:
/*
***
*****
*******
*********
*******
*****
***
*/
#include <stdio.h>

int main() {
    int n = 5; // number of rows for the top half

    // Top half
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 2*i-1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Bottom half
    for (int i = n-1; i >= 1; i--) {
        for (int j = 1; j <= 2*i-1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}


