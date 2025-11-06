//Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.
#include <stdio.h>

int main() {
    FILE *fptr;
    char name[50];
    int age;
    char line[100];

    // Take user input
    printf("Enter your name: ");
    scanf(" %[^\n]", name);  // allows full name with spaces
    printf("Enter your age: ");
    scanf("%d", &age);

    // Open file in write mode
    fptr = fopen("info.txt", "w");
    if (fptr == NULL) {
        printf("Error creating file!\n");
        return 1;
    }

    // Write data to file
    fprintf(fptr, "Name: %s\nAge: %d\n", name, age);
    fclose(fptr);

    printf("\nData successfully saved!\n");

    // Open file in read mode
    fptr = fopen("info.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    printf("\nReading contents of info.txt:\n");
    while (fgets(line, sizeof(line), fptr) != NULL)
        printf("%s", line);

    fclose(fptr);

    return 0;
}
