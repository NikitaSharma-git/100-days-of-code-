//(Arrays (1D)) Insert an element in an array at a given position.
#include <stdio.h>

int main() {
    int arr[100], n, pos, x;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to insert: ");
    scanf("%d", &x);

    printf("Enter position (0 to %d): ", n);
    scanf("%d", &pos);

    // shift elements to right
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = x;
    n++; // size increases

    printf("Array after insertion: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
