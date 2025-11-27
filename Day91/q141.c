//Define a structure Student with name, roll_no, and marks, then read and print one student's data.
#include <stdio.h>

// Define structure
struct Student {
char name[50];
int roll_no;
float marks;
};

int main() {
struct Student s;

// Read student data
printf("Enter name: ");
fgets(s.name, sizeof(s.name), stdin);  // Use fgets to read string with spaces

printf("Enter roll number: ");
scanf("%d", &s.roll_no);

printf("Enter marks: ");
scanf("%f", &s.marks);

// Print student data
printf("\nStudent Details:\n");
printf("Name: %s", s.name);  // fgets includes newline
printf("Roll Number: %d\n", s.roll_no);
printf("Marks: %.2f\n", s.marks);

return 0;
}