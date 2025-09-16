//Write a program to print the following pattern:
//*****
//****
//***
//**
//*
#include <stdio.h>

int main() {
    for (int i = 5; i >= 1; i--) {       // outer loop for rows
        for (int j = 1; j <= i; j++) {   // inner loop for stars
            printf("*");
        }
        printf("\n");                     // move to next row
    }
    return 0;
}
