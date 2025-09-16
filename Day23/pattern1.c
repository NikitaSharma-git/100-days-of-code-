//Write a program to print the following pattern:
//*****
//*****
//*****
//*****
//*****
#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {       // rows
        for (int j = 1; j <= 5; j++) {   // columns
            printf("*");
        }
        printf("\n");
    }
    return 0;
}


