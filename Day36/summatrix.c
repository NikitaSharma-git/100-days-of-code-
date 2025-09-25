//(2D Arrays) Find the sum of all elements in a matrix.
#include <stdio.h>

int main() {
    int rows, cols, sum = 0;
    int arr[10][10];

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
            sum += arr[i][j]; // add while reading
        }
    }

    printf("Sum of all elements = %d\n", sum);

    return 0;
}
