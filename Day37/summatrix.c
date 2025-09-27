// (2D Arrays) Find the sum of each row of a matrix and store it in an array.

#include <stdio.h>

int main() {
    int m, n;
    printf("Enter number of rows: ");
    scanf("%d", &m);
    printf("Enter number of columns: ");
    scanf("%d", &n);

    int matrix[m][n], rowSum[m];

    // Input matrix
    printf("Enter elements of the matrix:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Find row sums
    for(int i = 0; i < m; i++) {
        rowSum[i] = 0; // initialize
        for(int j = 0; j < n; j++) {
            rowSum[i] += matrix[i][j];
        }
    }

    // Print row sums
    printf("Sum of each row:\n");
    for(int i = 0; i < m; i++) {
        printf("Row %d = %d\n", i+1, rowSum[i]);
    }

    return 0;
}
