/*Write a program to check if a number is a palindrome.*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d", &n);
    int rev=0;
    int i=n;
    while(i!=0)
    {
        rev=(rev*10)+(i%10);
        i=i/10;        
    }
    if(n==rev)
    printf("Its a palindrome number");
    else
    printf("Its not a palindrome number");
    return 0;
}