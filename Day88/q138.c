//Print all enum names and integer values using a loop.
#include <stdio.h>

enum Colors { RED = 1, GREEN, BLUE, YELLOW };

int main() {
    enum Colors c;

    // Array of enum names (strings)
    const char *names[] = { "RED", "GREEN", "BLUE", "YELLOW" };

    // Print all enum names and values using a loop
    for (c = RED; c <= YELLOW; c++) {
        printf("%s = %d\n", names[c - 1], c);
    }

    return 0;
}
