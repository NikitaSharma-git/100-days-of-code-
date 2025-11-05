//Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.
#include <stdio.h>

int main() {
    int n, x, sumLeft, sumRight;
    
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    int totalSum = n * (n + 1) / 2;  // sum from 1 to n

    int pivot = -1;

    // Check each number from 1 to n
    for (x = 1; x <= n; x++) {
        sumLeft = x * (x + 1) / 2;           // sum from 1 to x
        sumRight = totalSum - sumLeft + x;   // sum from x to n
        if (sumLeft == sumRight) {
            pivot = x;
            break;
        }
    }

    printf("Pivot integer: %d\n", pivot);

    return 0;
}

