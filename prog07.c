// Write a C program to check whether a given year is leap year
#include <stdio.h>

int main()
{
    // Input
    int  year;
    printf("Year : ");  scanf("%d", &year);

    // Algorithm 

    // Output
    if(!(year%4))  printf("The given year is a leap year.");
    else        printf("The given year is not a leap year.");
}