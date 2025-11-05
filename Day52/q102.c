//Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.
#include <stdio.h>

int main() {
    int n, i, x, index = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d sorted elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter x: ");
    scanf("%d", &x);

    // Find smallest element >= x
    for (i = 0; i < n; i++) {
        if (arr[i] >= x) {
            index = i;
            break;   // first occurrence (smallest >= x)
        }
    }

    if (index == -1)
        printf("Ceil does not exist. Output: -1\n");
    else
        printf("Ceil of %d is %d at index %d\n", x, arr[index], index);

    return 0;
}
