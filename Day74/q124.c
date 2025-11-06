//Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
#include <stdio.h>

int main() {
    char sourceFile[100], destFile[100];
    FILE *src, *dest;
    char ch;

    // Input filenames
    printf("Enter source filename: ");
    scanf("%s", sourceFile);
    printf("Enter destination filename: ");
    scanf("%s", destFile);

    // Try opening source file
    src = fopen(sourceFile, "r");
    if (src == NULL) {
        // Source file doesn't exist, create it with default content
        printf("Source file '%s' not found. Creating it with default content...\n", sourceFile);
        src = fopen(sourceFile, "w");
        if (src == NULL) {
            printf("Error: Could not create source file!\n");
            return 1;
        }
        fprintf(src, "This is the default content of %s.\nYou can edit it later.\n", sourceFile);
        fclose(src);

        // Re-open in read mode for copying
        src = fopen(sourceFile, "r");
        if (src == NULL) {
            printf("Error: Could not open source file for reading!\n");
            return 1;
        }
    }

    // Open destination file in write mode
    dest = fopen(destFile, "w");
    if (dest == NULL) {
        printf("Error: Could not create destination file!\n");
        fclose(src);
        return 1;
    }

    // Copy content character by character
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    printf("File copied successfully from '%s' to '%s'.\n", sourceFile, destFile);

    // Close files
    fclose(src);
    fclose(dest);

    return 0;
}
