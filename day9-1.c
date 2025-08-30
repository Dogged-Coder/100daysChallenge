/*Write a program to find the roots of a quadratic equation and categorize them.*/
#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    printf("Enter the values of a, b, and c in ax^2 + bx + c = 0:\n");
    scanf("%d %d %d", &a, &b, &c);

    float discriminant = b*b - 4*a*c;

    if (discriminant > 0) {
        float root1 = (-b + sqrt(discriminant)) / (2*a);
        float root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("The roots are: %f and %f\n", root1, root2);
        printf("The roots are real and different.\n");
    } else if (discriminant == 0) {
        float root = -b / (2.0*a);
        printf("The roots are: %f and %f\n", root, root);
        printf("The roots are real and equal.\n");
    } else {
        float realPart = -b / (2.0*a);
        float imagPart = sqrt(-discriminant) / (2*a);
        printf("The roots are: %f + %fi and %f - %fi\n", realPart, imagPart, realPart, imagPart);
        printf("The roots are imaginary and different.\n");
    }
    return 0;
}