//Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
#include <stdio.h>

enum Menu { ADD = 1, SUBTRACT, MULTIPLY };

int main() {
    int choice;
    float a, b;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("\nMenu:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case ADD:
            printf("Result = %.2f\n", a + b);
            break;

        case SUBTRACT:
            printf("Result = %.2f\n", a - b);
            break;

        case MULTIPLY:
            printf("Result = %.2f\n", a * b);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
