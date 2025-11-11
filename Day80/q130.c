//Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int roll;
    float marks;
    int n;

    // Write records
    fp = fopen("students.txt", "w");

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nName: ");
        scanf("%s", name);

        printf("Roll: ");
        scanf("%d", &roll);

        printf("Marks: ");
        scanf("%f", &marks);

        fprintf(fp, "%s %d %.2f\n", name, roll, marks);
    }

    fclose(fp);

    // Read records
    fp = fopen("students.txt", "r");

    printf("\n--- Student Records ---\n");
    while (fscanf(fp, "%s %d %f", name, &roll, &marks) == 3) {
        printf("%s  %d  %.2f\n", name, roll, marks);
    }

    fclose(fp);

    return 0;
}
