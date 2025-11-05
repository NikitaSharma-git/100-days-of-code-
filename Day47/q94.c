//Find the longest word in a sentence.
#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[50], longest[50];
    int i = 0, j = 0, maxLen = 0;

    printf("Enter a sentence: ");
    gets(str);  

    while (1) {
        if (str[i] == ' ' || str[i] == '\0') {
            word[j] = '\0';  
            if (j > maxLen) {
                maxLen = j;
                strcpy(longest, word);
            }
            j = 0;  
        } else {
            word[j++] = str[i];
        }

        if (str[i] == '\0')
            break;
        i++;
    }

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLen);

    return 0;
}
