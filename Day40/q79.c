//Perform diagonal traversal of a matrix.
#include <stdio.h>

int main() {
    int n, i, j;
    int a[10][10];

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    printf("Enter elements of matrix:\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    printf("Diagonal traversal:\n");

    // Traverse all diagonals
    for(int d = 0; d < n; d++) {
        i = 0;
        j = d;
        while(i < n && j < n) {
            printf("%d ", a[i][j]);
            i++;
            j++;
        }
        printf("\n");
    }

    for(int d = 1; d < n; d++) {
        i = d;
        j = 0;
        while(i < n && j < n) {
            printf("%d ", a[i][j]);
            i++;
            j++;
        }
        printf("\n");
    }

    return 0;
}
