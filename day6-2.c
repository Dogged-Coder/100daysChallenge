/*Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.*/
#include<stdio.h>
int main()
{
    int a ;
    printf("Enter a integer");
    scanf("%d",&a);
    if (a>0)
    printf("Its a positive integer");
    else if(a==0)
    printf("The integer is zero");
    else
    printf("the Integer is negetive");
    return 0;
}