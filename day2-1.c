/*Write a program to calculate the area and perimeter of a rectangle given its length and breadth.*/
#include<stdio.h>
int main()
{
    float len,bre;
    printf("Enter the length and bredth:\n");
    scanf("%f %f",&len, &bre);
    printf("\nrimeter of the rectangle is:\nf", 2*(len+bre));
    printf("\ne area of rectangle is %f",len*bre);
    return 0;
}