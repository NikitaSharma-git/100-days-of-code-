//Take two structs as input and check if they are identical.
#include <stdio.h>
#include <string.h>

struct Employee {
char name[50];
int emp_id;
float salary;
};

int main() {
struct Employee e1, e2;

// Input first employee
printf("Enter first employee details:\n");
printf("Name: "); getchar();
fgets(e1.name, sizeof(e1.name), stdin);
printf("ID: "); scanf("%d", &e1.emp_id);
printf("Salary: "); scanf("%f", &e1.salary);

// Input second employee
printf("\nEnter second employee details:\n");
getchar(); // Consume leftover newline
fgets(e2.name, sizeof(e2.name), stdin);
printf("ID: "); scanf("%d", &e2.emp_id);
printf("Salary: "); scanf("%f", &e2.salary);

// Compare structures
if(strcmp(e1.name, e2.name) == 0 && e1.emp_id == e2.emp_id && e1.salary == e2.salary) {
    printf("\nThe two employees are identical.\n");
} else {
    printf("\nThe two employees are not identical.\n");
}

return 0;
}