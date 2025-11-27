//Find and print the student with the highest marks.
#include <stdio.h>

struct Student {
char name[50];
int roll_no;
float marks;
};

int main() {
struct Student students[5];
int i, maxIndex = 0;

// Read data for 5 students
for(i = 0; i < 5; i++) {
    printf("Enter details for student %d:\n", i + 1);
    printf("Name: ");
    getchar();  // Consume leftover newline
    fgets(students[i].name, sizeof(students[i].name), stdin);

    printf("Roll Number: ");
    scanf("%d", &students[i].roll_no);

    printf("Marks: ");
    scanf("%f", &students[i].marks);

    printf("\n");
}

// Find student with highest marks
for(i = 1; i < 5; i++) {
    if(students[i].marks > students[maxIndex].marks) {
        maxIndex = i;
    }
}

// Print student with highest marks
printf("Student with highest marks:\n");
printf("Name: %s", students[maxIndex].name);
printf("Roll Number: %d\n", students[maxIndex].roll_no);
printf("Marks: %.2f\n", students[maxIndex].marks);

return 0;

}