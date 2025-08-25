/*Write a program to input two numbers and display their sum, difference, product, and quotient*/

#include<stdio.h>
int main()
{
     float no1,no2;
     printf("Enter two numbers:\n");
     scanf("%f %f", &no1 , &no2);
     printf("\nSum of numbers are:\n %f", no1+no2);
     if (no2!=0)
     printf("\nQuotient of numbers are:\n %f", no1/no2);
     else
     printf("\nCan't divide by 0\n");
     printf("\nroduct of numbers are:\n %f", no1*no2);
     printf("\ndifference of numbers are: %f", no1-no2);
     return 0;
}