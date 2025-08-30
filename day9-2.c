/*Write a program to assign grades based on a percentage input.*/
#include <stdio.h>

int main() {
    int per;
    printf("Enter your percentage: ");
    scanf("%d", &per);

    if (per > 85)
        printf("GRADE A\n");
    else if (per > 75 && per <= 85)
        printf("GRADE B\n");
    else if (per > 65 && per <= 75)
        printf("GRADE C\n");
    else if (per > 50 && per <= 65)
        printf("GRADE D\n");
    else if (per > 35 && per <= 50)
        printf("GRADE E\n");
    else
        printf("You have FAILED !!\n");

    return 0;
}