/*Write a program to find profit or loss percentage given cost price and selling price.*/
#include <stdio.h>

int main() {
    float cp, sp, amount, percentage;

    printf("Enter the cost price: ");
    scanf("%f", &cp);

    printf("Enter the selling price: ");
    scanf("%f", &sp);

    if (sp > cp) {
        amount = sp - cp;
        percentage = (amount / cp) * 100;
        printf("Profit: %.2f\n", amount);
        printf("Profit percentage: %.2f%%\n", percentage);
    } else if (cp > sp) {
        amount = cp - sp;
        percentage = (amount / cp) * 100;
        printf("Loss: %.2f\n", amount);
        printf("Loss percentage: %.2f%%\n", percentage);
    } else {
        printf("No profit, no loss.\n");
    }

    return 0;
}
