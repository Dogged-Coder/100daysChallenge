/*Write a program to print the product of even numbers from 1 to n.*/

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
        if(i%2==0)
        sum=sum+i;
        i++;
    }
    printf("Sum is %d",sum);
    return 0;
}