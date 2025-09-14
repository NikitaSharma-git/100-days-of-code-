//Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>

int main() {
    int seconds, hours, minutes, remainingSeconds;

    // Input total seconds
    printf("Enter time in seconds: ");
    scanf("%d", &seconds);

    // Conversion
    hours = seconds / 3600;                  // 1 hour = 3600 seconds
    minutes = (seconds % 3600) / 60;         // remaining minutes
    remainingSeconds = seconds % 60;         // remaining seconds

    // Output in hh:mm:ss format
    printf("Time = %02d:%02d:%02d\n", hours, minutes, remainingSeconds);

    return 0;
}

