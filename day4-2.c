/*Write a program to find and display the sum of the first n natural numbers.*/
#include<stdio.h>
int main()
{
    printf("Enter the value of n:");
    int n ; scanf("%d",&n);
    printf("The sum of first n natural numbers is:");
    int sum=0;
    for (int i=1;i<(n+1);i++)
    {
         sum=sum+i;    
    }
    printf("%d",sum);
    return 0;
}