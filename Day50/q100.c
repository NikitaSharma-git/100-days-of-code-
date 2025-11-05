//Print all sub-strings of a string.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, k, len;

    printf("Enter a string: ");
    gets(str);  // or use fgets(str, 100, stdin);

    len = strlen(str);

    printf("All substrings are:\n");

    for (i = 0; i < len; i++) {          // starting index
        for (j = i; j < len; j++) {      // ending index
            for (k = i; k <= j; k++) {   // print substring from i to j
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}
