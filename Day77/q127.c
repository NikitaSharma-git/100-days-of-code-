//Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *inputFile, *outputFile;
    char ch;

    // Open input file in read mode
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Error: Could not open input.txt. Make sure it exists.\n");
        return 1;
    }

    // Open output file in write mode
    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        printf("Error: Could not create output.txt\n");
        fclose(inputFile);
        return 1;
    }

    // Read character by character, convert to uppercase, and write to output
    while ((ch = fgetc(inputFile)) != EOF) {
        fputc(toupper((unsigned char)ch), outputFile);
    }

    printf("Conversion complete. Check output.txt\n");

    // Close files
    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
