//Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number
#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements (from 0 to n, one number missing): ");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int totalSum = n * (n + 1) / 2;  // Sum of numbers from 0 to n
    int arraySum = 0;

    for(int i = 0; i < n; i++)
        arraySum += arr[i];

    int missing = totalSum - arraySum;
    printf("Missing number = %d\n", missing);

    return 0;
}
