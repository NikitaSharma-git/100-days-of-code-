// (Arrays (1D)) Rotate an array to the right by k positions.
#include <stdio.h>

int main() {
    int arr[100], n, k;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter k (positions to rotate): ");
    scanf("%d", &k);

    k = k % n; // handle if k > n

    int temp[100];

    // copy last k elements to temp
    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    // shift the rest to the right
    for (int i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }

    // copy back from temp to front
    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }

    printf("Array after rotation: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
