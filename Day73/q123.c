//Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fptr;
    char filename[100];
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;

    // Take file name as input
    printf("Enter filename: ");
    scanf("%s", filename);

    fptr = fopen(filename, "r");
    if (fptr == NULL) {
        printf("Error opening file! Make sure the file exists.\n");
        return 1;
    }

    while ((ch = fgetc(fptr)) != EOF) {
        characters++;  // Count every character

        if (ch == '\n')
            lines++;    // Count lines

        if (isspace(ch)) {
            inWord = 0; // End of a word
        } else if (inWord == 0) {
            inWord = 1; // Start of a new word
            words++;
        }
    }

    // If file is not empty but doesn't end with newline, count last line
    if (characters > 0 && ch != '\n')
        lines++;

    fclose(fptr);

    printf("\nTotal characters: %d\n", characters);
    printf("Total words: %d\n", words);
    printf("Total lines: %d\n", lines);

    return 0;
}
