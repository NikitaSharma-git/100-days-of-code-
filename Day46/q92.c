//Find the first repeating lowercase alphabet in a string.
#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0}, i;

    printf("Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;
            if(freq[str[i] - 'a'] == 2) {
                printf("First repeating lowercase letter: %c\n", str[i]);
                return 0;
            }
        }
    }

    printf("No repeating lowercase letter found.\n");
    return 0;
}
