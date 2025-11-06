//Write a program to take a string input. Change it to sentence case.
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    FILE *fptr;
    char str[1000];

    printf("Enter a string (max 999 chars):\n");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        printf("No input.\n");
        return 1;
    }

    // Remove trailing newline from fgets if present
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    int newSentence = 1; // next alphabetic char should be uppercase
    for (size_t i = 0; i < len; i++) {
        unsigned char ch = (unsigned char)str[i];

        if (isalpha(ch)) {
            if (newSentence) {
                str[i] = (char) toupper(ch);
                newSentence = 0;
            } else {
                str[i] = (char) tolower(ch);
            }
        } else {
            // If we see a sentence-ending punctuation, set flag so next letter is capitalized
            if (ch == '.' || ch == '!' || ch == '?') {
                newSentence = 1;
            }
            // for other characters (spaces, commas, digits, quotes...) do nothing
            // keep newSentence as-is (so punctuation followed by no-space still capitalizes next letter)
        }
    }

    // Write to file
    fptr = fopen("sentence.txt", "w");
    if (fptr == NULL) {
        perror("Error opening file for writing");
        return 1;
    }
    fputs(str, fptr);
    fclose(fptr);

    // Read from file and display result
    fptr = fopen("sentence.txt", "r");
    if (fptr == NULL) {
        perror("Error opening file for reading");
        return 1;
    }

    printf("\nSentence case text from file:\n");
    while (fgets(str, sizeof(str), fptr) != NULL) {
        printf("%s", str);
    }

    fclose(fptr);
    printf("\n");
    return 0;
}
