//Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
#include <stdio.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main() {
    int choice;
    enum Status s;

    printf("Choose status:\n");
    printf("0 = SUCCESS\n");
    printf("1 = FAILURE\n");
    printf("2 = TIMEOUT\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    s = choice;

    switch(s) {
        case SUCCESS:
            printf("Operation successful!\n");
            break;

        case FAILURE:
            printf("Operation failed.\n");
            break;

        case TIMEOUT:
            printf("Operation timed out.\n");
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
