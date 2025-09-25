// (Arrays (1D)) Delete an element from an array.
#include <stdio.h>

int main() {
    int arr[100], n, pos;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter position to delete (0 to %d): ", n - 1);
    scanf("%d", &pos);

    // shift elements left from pos
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--; // size decreases

    printf("Array after deletion: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

