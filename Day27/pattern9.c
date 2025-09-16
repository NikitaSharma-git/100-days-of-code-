//Write a program to print the following pattern:

/*

***

*****
*******
***

*/
#include <stdio.h>

int main() {
    // Top half
    for (int i = 1; i <= 4; i++) {          
        for (int j = 1; j <= 2*i-1; j++) {
            printf("*");
        }
        printf("\n\n");                   
    }

    // Bottom half
    for (int i = 2; i >= 1; i--) {          
        for (int j = 1; j <= 2*i-1; j++) {
            printf("*");
        }
        printf("\n\n");
    }

    return 0;
}



