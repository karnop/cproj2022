// WAP to calculate roots of a quadratic equation.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // Input
    int a, b, c;
    printf("Enter the coefficient of x^2 : ");  scanf("%d", &a);
    printf("Enter the coefficient of x   : ");  scanf("%d", &b);
    printf("Enter the constant c         : ");  scanf("%d", &c);
    
    // Algorithm 
    int discriminant = b * b - 4 * a * c;
    float root1 = (-b + sqrt(discriminant)) / (2 * a);
    float root2 = (-b - sqrt(discriminant)) / (2 * a);

    // Output
    printf("Root1 : %.2f \n", root1);
    printf("Root2 : %.2f", root2);
}