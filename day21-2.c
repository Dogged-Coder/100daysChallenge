/*Write a program to check if a number is a perfect number.*/

#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number");
    scanf("%d", &num);
    int org=num;
    int sum=0;
    for (int i=1; i<num; i++)
    {
        if(num%i==0)
        {
            sum = sum+i;
        }
    }
    if(num==sum)
    printf("Its a perfect number");
    else
    printf("Its not a perfect number");
    return 0;
}