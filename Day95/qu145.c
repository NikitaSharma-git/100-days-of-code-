//Return a structure containing top student's details from a function.
#include <stdio.h>

struct Student {
char name[50];
int roll_no;
float marks;
};

// Function to find top student
struct Student getTopStudent(struct Student s[], int n) {
int i, max = 0;
for(i = 1; i < n; i++)
if(s[i].marks > s[max].marks) max = i;
return s[max];
}

int main() {
struct Student students[5], top;
int i;

for(i = 0; i < 5; i++) {
    printf("Enter name: "); getchar();
    fgets(students[i].name, sizeof(students[i].name), stdin);
    printf("Roll No: "); scanf("%d", &students[i].roll_no);
    printf("Marks: "); scanf("%f", &students[i].marks);
}

top = getTopStudent(students, 5);

printf("\nTop Student:\nName: %sRoll No: %d\nMarks: %.2f\n", top.name, top.roll_no, top.marks);

return 0;
}