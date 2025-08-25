/*Write a program to calculate the area and circumference of a circle given its radius.*/
#include<stdio.h>
#define _USE_MATH_DEFINES
#include<math.h>
int main()
{
    float radii;
    printf("Rnter the radius:");
    scanf("%f", &radii);
    printf("The area of circle is: %f", M_PI*radii*radii );
    printf("The circumference of circle is:%f",2*M_PI*radii);
    return 0;
}