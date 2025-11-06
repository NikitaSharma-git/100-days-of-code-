//Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fptr;
    char filename[100];
    char ch;
    int vowels = 0, consonants = 0;

    // Take filename as input
    printf("Enter filename: ");
    scanf("%s", filename);

    // Open file in read mode
    fptr = fopen(filename, "r");
    if (fptr == NULL) {
        printf("Error: Could not open the file '%s'\n", filename);
        return 1;
    }

    // Read character by character
    while ((ch = fgetc(fptr)) != EOF) {
        if (isalpha(ch)) { // Only consider alphabetic characters
            ch = tolower(ch); // Convert to lowercase for easier comparison
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    fclose(fptr);

    printf("Total vowels: %d\n", vowels);
    printf("Total consonants: %d\n", consonants);

    return 0;
}

