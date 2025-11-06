//Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.
#include <stdio.h>

int main() {
    char filename[100];
    FILE *fptr;
    char ch;

    // Ask for filename
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Try opening in read mode
    fptr = fopen(filename, "r");

    if (fptr == NULL) {
        // File doesn't exist, create it with default content
        printf("File '%s' does not exist. Creating it with default content...\n", filename);
        fptr = fopen(filename, "w");
        if (fptr == NULL) {
            printf("Error: Could not create the file!\n");
            return 1;
        }
        fprintf(fptr, "This is the default content of %s.\nYou can edit it later.\n", filename);
        fclose(fptr);

        // Re-open in read mode
        fptr = fopen(filename, "r");
        if (fptr == NULL) {
            printf("Error: Could not open the file for reading!\n");
            return 1;
        }
    }

    // File exists or was created successfully, read and display content
    printf("\nContents of '%s':\n", filename);
    while ((ch = fgetc(fptr)) != EOF) {
        putchar(ch);
    }

    fclose(fptr);

    return 0;
}
