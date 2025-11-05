//Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>
#include <string.h>

int main() {
    char date[20], day[3], month[3], year[5];
    char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                      "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    int m;

    printf("Enter date (dd/mm/yyyy): ");
    gets(date);  // or use fgets(date, 20, stdin);

    // Split the date into parts
    strncpy(day, date, 2);
    day[2] = '\0';

    strncpy(month, date + 3, 2);
    month[2] = '\0';

    strcpy(year, date + 6);

    // Convert month number to integer
    m = (month[0] - '0') * 10 + (month[1] - '0');

    // Print result
    printf("Converted date: %s-%s-%s\n", day, months[m - 1], year);

    return 0;
}
