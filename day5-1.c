/*Write a program to calculate simple and compound interest for given principal, rate, and time.*/
#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time;
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter rate of interest: ");
    scanf("%f", &rate);
    printf("Enter time (in years): ");
    scanf("%f", &time);
    float simple_interest = (principal * rate * time) / 100;
    float compound_interest = principal * pow((1 + rate / 100), time) - principal;
    printf("Simple Interest: %f\n", simple_interest);
    printf("Compound Interest: %f\n", compound_interest);

    return 0;
}