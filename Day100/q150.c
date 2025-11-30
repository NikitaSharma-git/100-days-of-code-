//Use pointer to struct to modify and display data using -> operator.
#include <stdio.h>

struct Student {
    int roll;
    float marks;
    char name[20];
};

int main() {
    struct Student s;            // normal variable
    struct Student *ptr = &s;    // pointer to structure

    // Modify values using -> operator
    printf("Enter name: ");
    scanf("%s", ptr->name);

    printf("Enter roll number: ");
    scanf("%d", &ptr->roll);

    printf("Enter marks: ");
    scanf("%f", &ptr->marks);

    // Display values using -> operator
    printf("\n--- Student Details ---\n");
    printf("Name  : %s\n", ptr->name);
    printf("Roll  : %d\n", ptr->roll);
    printf("Marks : %.2f\n", ptr->marks);

    return 0;
}

