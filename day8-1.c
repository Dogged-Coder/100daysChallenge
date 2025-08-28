/*Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.*/

#include<stdio.h>
int main()
{
    char c;
    printf("Enter a character :");
    scanf("%c", &c);
    if (c>='A' && c<='Z')
    printf("Its a upper case letter");
    if (c>='a' && c<='z')
    printf("Its a lower case letter");
    if (c>='0' && c<='9')
    printf("Its a digit");
    else
    printf("Its a specia character");
    return 0;
}
/*ANOTHER METHOD*/
/*
if (isupper(c))
        printf("Uppercase alphabet\n");
    else if (islower(c))
        printf("Lowercase alphabet\n");
    else if (isdigit(c))
        printf("Digit\n");
    else
        printf("Special character\n");
*/