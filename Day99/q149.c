//Use malloc() to allocate structure memory dynamically and print details.
#include <stdio.h>
#include <stdlib.h>

struct Employee {
char name[50];
int emp_id;
float salary;
};

int main() {
struct Employee *emp;

// Allocate memory dynamically
emp = (struct Employee*) malloc(sizeof(struct Employee));
if(emp == NULL) {
    printf("Memory allocation failed!\n");
    return 1;
}

// Read employee details
printf("Enter employee name: ");
getchar(); // consume leftover newline
fgets(emp->name, sizeof(emp->name), stdin);

printf("Enter employee ID: ");
scanf("%d", &emp->emp_id);

printf("Enter salary: ");
scanf("%f", &emp->salary);

// Print employee details
printf("\nEmployee Details:\n");
printf("Name: %s", emp->name);
printf("ID: %d\n", emp->emp_id);
printf("Salary: %.2f\n", emp->salary);

// Free allocated memory
free(emp);

return 0;
}