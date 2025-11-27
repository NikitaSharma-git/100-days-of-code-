//Write a function that accepts a structure as parameter and prints its members.
#include <stdio.h>

struct Student {
char name[50];
int roll_no;
float marks;
};

// Function to print student details
void printStudent(struct Student s) {
printf("Name: %s", s.name); // fgets includes newline
printf("Roll Number: %d\n", s.roll_no);
printf("Marks: %.2f\n", s.marks);
}

int main() {
struct Student s;

// Read student data
printf("Enter student name: ");
fgets(s.name, sizeof(s.name), stdin);

printf("Enter roll number: ");
scanf("%d", &s.roll_no);

printf("Enter marks: ");
scanf("%f", &s.marks);

printf("\nStudent Details:\n");
printStudent(s);  // Pass structure to function

return 0;

}