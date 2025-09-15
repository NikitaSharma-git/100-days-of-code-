//Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h> 

int main() {
    float principal, rate, time;
    float simpleInterest, compoundInterest, amount;

    // Input principal, rate, and time
    printf("Enter Principal amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest (in %%): ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    // Calculate Simple Interest
    simpleInterest = (principal * rate * time) / 100;

    // Calculate Compound Interest
    amount = principal * pow((1 + rate / 100), time);
    compoundInterest = amount - principal;

    // Display results
    printf("Simple Interest = %.2f", simpleInterest);
    printf("Compound Interest = %.2f", compoundInterest);

    return 0;
}
