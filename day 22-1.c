/*Write a program to check if a number is a strong number.*/

#include<stdio.h>
int main()
{
    int num ;
    printf("Enter a number");
    scanf("%d",&num);
    int org = num;
    int fact=1,rem,sum;
    while(num=!0)
    {
        rem=num%10;
        for(int i=1;i<=rem;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        num=num/10;
    }
    if(org==sum)
    printf("Its a strong number");
    else
    printf("Its not a strong number");
    return 0;
}