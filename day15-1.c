/*Write a program to calculate the factorial of a number.*/

#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number");
    scanf("%d",&a);
    int i=1;
    int fact=0;
    while(i<=a)
    {
        fact=fact*i;
        i++;
    }
    printf("Sum is %d",fact);
    return 0;
}