//Store employee data in a binary file using fwrite() and read using fread().
#include <stdio.h>
#include <stdlib.h>

struct Date {
int day;
int month;
int year;
};

struct Employee {
char name[50];
int emp_id;
float salary;
struct Date joining_date;
};

int main() {
struct Employee emp;
FILE *fp;

// Read employee data
printf("Enter employee name: ");
fgets(emp.name, sizeof(emp.name), stdin);

printf("Enter employee ID: ");
scanf("%d", &emp.emp_id);

printf("Enter salary: ");
scanf("%f", &emp.salary);

printf("Enter joining date (DD MM YYYY): ");
scanf("%d %d %d", &emp.joining_date.day, &emp.joining_date.month, &emp.joining_date.year);

// Write employee to binary file
fp = fopen("employee.dat", "wb");
if(fp == NULL) {
    printf("Error opening file!\n");
    return 1;
}
fwrite(&emp, sizeof(struct Employee), 1, fp);
fclose(fp);

printf("\nData saved to file.\n");

// Read employee from binary file
fp = fopen("employee.dat", "rb");
if(fp == NULL) {
    printf("Error opening file!\n");
    return 1;
}
fread(&emp, sizeof(struct Employee), 1, fp);
fclose(fp);

// Print employee data
printf("\nEmployee Details from File:\n");
printf("Name: %s", emp.name);
printf("ID: %d\n", emp.emp_id);
printf("Salary: %.2f\n", emp.salary);
printf("Joining Date: %02d-%02d-%04d\n", emp.joining_date.day, emp.joining_date.month, emp.joining_date.year);

return 0;
}
