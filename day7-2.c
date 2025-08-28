/*Write a program to input a character and check whether it is a vowel or consonant using if–else.*/

#include<stdio.h>
int main()
{
    char c;
    printf("Enter a character:");
    scanf("%c", &c);
    if(c=='a' || c=='e'||c=='i'||c=='o'||c=='u')
    printf("Its a vowel :)");
    else 
    printf("Its a consonant");
    return 0;
}