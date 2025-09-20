//Search for an element in an array using linear search.
#include <stdio.h>

int main() {
    int n, i, key;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            printf("Found at position %d\n", i+1);
            return 0;  
        }
    }

    printf("Not found\n");
    return 0;
}
