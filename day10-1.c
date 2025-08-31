/*Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.*/
#include<stdio.h>
int main()
{
    float side1,side2,side3;
    printf("Enter the length of sides:");
    scanf("%f%f%f",&side1,&side2,&side3);
    if(side1==side2)
    {
        if(side1==side2==side3)
        printf("This is a equilateral triangle");
        else
        printf("This is a iscosceles triangle");
    }
    else
    printf("Its a scelene triangle");
    return 0;
}