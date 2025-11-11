//A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.
#include <stdio.h>

int main() {
    FILE *fp;
    int num, count = 0;
    int sum = 0;
    
    fp = fopen("numbers.txt", "r");
    
    if (fp == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    // Read integers until end of file
    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count == 0) {
        printf("No integers found in file.\n");
    } else {
        float avg = (float) sum / count;
        printf("Sum = %d\n", sum);
        printf("Average = %.2f\n", avg);
    }

    return 0;
}
