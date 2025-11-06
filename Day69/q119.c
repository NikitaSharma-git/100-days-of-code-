//Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements (one element is repeated): ");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Using XOR to find the repeated number
    // Array contains numbers from 1 to n-1 (since one repeats)
    int xor1 = 0, xor2 = 0;

    // XOR all array elements
    for(int i = 0; i < n; i++)
        xor1 ^= arr[i];

    // XOR all numbers from 1 to n-1
    for(int i = 1; i <= n - 1; i++)
        xor2 ^= i;

    int repeated = xor1 ^ xor2;

    printf("Repeated element = %d\n", repeated);

    return 0;
}
