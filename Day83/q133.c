//Create an enum for months and print how many days each month has.
#include <stdio.h>

enum Month {
    JAN = 1,
    FEB,
    MAR,
    APR,
    MAY,
    JUN,
    JUL,
    AUG,
    SEP,
    OCT,
    NOV,
    DEC
};

int main() {
    int m;
    enum Month month;

    printf("Enter month number (1-12): ");
    scanf("%d", &m);

    month = m;

    switch(month) {
        case JAN:
        case MAR:
        case MAY:
        case JUL:
        case AUG:
        case OCT:
        case DEC:
            printf("31 days\n");
            break;

        case APR:
        case JUN:
        case SEP:
        case NOV:
            printf("30 days\n");
            break;

        case FEB:
            printf("28 or 29 days (February)\n");
            break;

        default:
            printf("Invalid month number\n");
    }

    return 0;
}
