//Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>

int main() {
    int n, i, j, sum = 0;
    int a[100][100];   // fixed size matrix

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    printf("Enter elements of matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // calculate sum of main diagonal
    for(i = 0; i < n; i++) {
        sum = sum + a[i][i];
    }

    printf("Sum of main diagonal elements = %d\n", sum);

    return 0;
}
