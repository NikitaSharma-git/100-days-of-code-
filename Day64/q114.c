//Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    printf("Enter a string: ");
    scanf("%s", s);

    int n = strlen(s);
    int maxLen = 0, start = 0;
    int lastIndex[256];  // For ASCII characters

    // Initialize all characters as not seen (-1)
    for (int i = 0; i < 256; i++)
        lastIndex[i] = -1;

    for (int end = 0; end < n; end++) {
        // If character already seen, move start to right of last occurrence
        if (lastIndex[(int)s[end]] >= start)
            start = lastIndex[(int)s[end]] + 1;

        // Update last seen index
        lastIndex[(int)s[end]] = end;

        // Update maximum length
        int length = end - start + 1;
        if (length > maxLen)
            maxLen = length;
    }

    printf("Length of longest substring without repeating characters = %d\n", maxLen);
    return 0;
}
