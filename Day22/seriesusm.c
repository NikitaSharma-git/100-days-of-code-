//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int num = 2 * i - 1;   
        sum += (float)num / i; 
    }

    printf("Sum of series up to %d terms = %.2f", n, sum);
    return 0;
}
