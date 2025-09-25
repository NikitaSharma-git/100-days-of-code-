//(2D Arrays) Read and print a matrix.
#include <stdio.h>

int main() {
    int rows, cols;
    int arr[10][10];   // matrix

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Input elements
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Print elements
    printf("The matrix is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}


