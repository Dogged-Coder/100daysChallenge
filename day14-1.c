/*Write a program to print the sum of the first n odd numbers.*/


#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number");
    scanf("%d",&a);
    int i=1;
    int sum=0;
    while(i<=a)
    {
        if(i%2!=0)
        sum=sum+i;
        i++;
    }
    printf("Sum is %d",sum);
    return 0;
}