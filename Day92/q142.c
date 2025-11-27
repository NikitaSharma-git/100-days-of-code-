//Store details of 5 students in an array of structures and print all.
#include <stdio.h>

struct Student {
char name[50];
int roll_no;
float marks;
};

int main() {
struct Student students[5]; // Array of 5 students
int i;

// Read data for 5 students
for(i = 0; i < 5; i++) {
    printf("Enter details for student %d:\n", i + 1);
    printf("Name: ");
    getchar();  // To consume leftover newline
    fgets(students[i].name, sizeof(students[i].name), stdin);

    printf("Roll Number: ");
    scanf("%d", &students[i].roll_no);

    printf("Marks: ");
    scanf("%f", &students[i].marks);

    printf("\n");
}

// Print all students' data
printf("All Students Details:\n");
for(i = 0; i < 5; i++) {
    printf("Student %d:\n", i + 1);
    printf("Name: %s", students[i].name);  // fgets includes newline
    printf("Roll Number: %d\n", students[i].roll_no);
    printf("Marks: %.2f\n", students[i].marks);
    printf("\n");
}

return 0;
}