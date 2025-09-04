/*Write a program to calculate library fine based on late days as follows:
First 5 days late: ₹2/day
Next 5 days late: ₹4/day
Next 20 days days late: ₹6/day
More than 30 days: Membership Cancelled.*/

#include <stdio.h>

int main() {
    int days;
    int fine;

    printf("Enter the number of days late: ");
    scanf("%d", &days);

    fine = (days <= 5) ? days * 2 :
           (days <= 10) ? (5 * 2) + (days - 5) * 4 :
           (days <= 30) ? (5 * 2) + (5 * 4) + (days - 10) * 6 : -1;

    (fine == -1) ? printf("Membership Cancelled!\n") :
                   printf("Fine = ₹ %d \n", fine);

    return 0;
}


