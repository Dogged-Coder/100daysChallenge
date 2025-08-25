/*Write a program to swap two numbers using a third variable.*/
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers- variable a and variable b:");
    scanf("%d %d",&a,&b);
    printf("Variable a: %d",a);
    printf("Variable b: %d",b);
    int c=a;
    a=b;
    b=c;
    printf("The swapped numbers are:");
    printf("Variable a: %d",a);
    printf("Variable b: %d",b);
    return 0;
}