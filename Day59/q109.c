//Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
#include <stdio.h>

int main() {
    int n, k, i, j, sum, maxSum;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter subarray size k: ");
    scanf("%d", &k);

    if (k > n || k <= 0) {
        printf("Invalid subarray size.\n");
        return 0;
    }

    maxSum = -1000000;  // a very small number

    for (i = 0; i <= n - k; i++) {
        sum = 0;
        for (j = i; j < i + k; j++)
            sum += arr[j];
        if (sum > maxSum)
            maxSum = sum;
    }

    printf("Maximum sum of subarray of size %d is %d\n", k, maxSum);

    return 0;
}
