/*Write a program to check if a number is an Armstrong number.*/

#include<stdio.h>
#include <math.h>
int main() 
{
    int num, orig, remainder, result = 0, n = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    orig = num;
    int temp = num;
    while (temp != 0) 
    {
        temp /= 10;
        n++;
    }
    temp = num;
    while (temp != 0) 
    {
        remainder = temp % 10;
        result += pow(remainder, n);
        temp /= 10;
    }

    // Check Armstrong condition
    if (result == orig)
        printf("%d is an Armstrong number.\n", orig);
    else
        printf("%d is NOT an Armstrong number.\n", orig);

    return 0;
}


//lenght
//each digit
//power function