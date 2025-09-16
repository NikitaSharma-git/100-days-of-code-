//Write a program to print the following pattern:

//*

//*
//*
//*

//*
//*
//*
//*
//*

//*
//*
//*

//*
#include <stdio.h>

int main() {
    // First block: 1 star
    printf("*\n\n");

    // Second block: 4 stars
    for (int i = 1; i <= 4; i++)
        printf("*\n");
    printf("\n");

    // Third block: 3 stars
    for (int i = 1; i <= 3; i++)
        printf("*\n");
    printf("\n");

    // Fourth block: 1 star
    printf("*\n");

    return 0;
}
