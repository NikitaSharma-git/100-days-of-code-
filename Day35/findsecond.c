// (Arrays (1D)) Find the second largest element in an array.
#include <stdio.h>

int main() {
    int arr[100], n;
    int first, second;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // initialize
    first = second = -99999;  // assume very small

    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (second == -99999)
        printf("No second largest element\n");
    else
        printf("Second largest element = %d\n", second);

    return 0;
}
