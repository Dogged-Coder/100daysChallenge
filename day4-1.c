//IMPORTANT
/*Write a program to swap two numbers without using a third variable.*/
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers- variable a and variable b:");
    scanf("%d %d",&a,&b);
    printf("Variable a: %d",a);
    printf("Variable b: %d",b);
    a = a + b;  
    a = a - b;
    b = a - b;
    printf("The swapped numbers are:");
    printf("Variable a: %d",a);
    printf("Variable b: %d",b);
    return 0;
}