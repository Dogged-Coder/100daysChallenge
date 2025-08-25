/*Write a program to convert temperature from Celsius to Fahrenheit.*/
#include<stdio.h>
int main()
{
    float cel;
    float fer;
    printf("Enter the temperature in celcuis:");
    scanf("%f", &cel);
    fer = ((cel*9)/5)+32;
    printf("Converted temperatur: %f", fer);
    return 0;
}