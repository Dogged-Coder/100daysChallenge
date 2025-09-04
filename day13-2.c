/*Write a program to print numbers from 1 to n.*/

#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number");
    scanf("%d",&a);
    int i=1;
    while(i<=a)
    {
        printf("%d", i);
        i++;
    }
    return 0;
}