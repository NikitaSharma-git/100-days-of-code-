//Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.
#include <stdio.h>

int main() {
    FILE *fptr;
    char filename[100];
    char newLine[200];

    // Take the filename as input
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Open the file in append mode
    fptr = fopen(filename, "a");
    if (fptr == NULL) {
        printf("Error: Could not open the file!\n");
        return 1;
    }

    // Clear input buffer before taking a line
    getchar(); // remove leftover newline from previous input

    // Take a new line from the user
    printf("Enter the text to append: ");
    fgets(newLine, sizeof(newLine), stdin);

    // Append the text to the file
    fputs(newLine, fptr);

    // Close the file
    fclose(fptr);

    printf("Text successfully appended to %s\n", filename);

    return 0;
}
