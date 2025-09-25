//(Arrays (1D)) Insert an element in a sorted array at the appropriate position.
#include <stdio.h>

int main() {
    int n, x, pos;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[100]; // large enough to hold extra element
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to insert: ");
    scanf("%d", &x);

    // find position where x should be inserted
    pos = n;
    for (int i = 0; i < n; i++) {
        if (arr[i] > x) {
            pos = i;
            break;
        }
    }

    // shift elements to the right
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = x;
    n++; // size increased by 1

    printf("Array after insertion: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

