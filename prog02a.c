// Write a C program to find area of circle
#include <stdio.h>

int main()
{
    // Input
    float radi, area;
    printf("Radius of the circle : ");  scanf("%f", &radi);

    // Algorithm 
    area = (22*radi*radi)/7;

    // Output
    printf("Area with radius %f = %f", radi, area);
}