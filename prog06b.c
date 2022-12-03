// Write a C program to convert days into years, weeks and days
#include <stdio.h>

int main()
{
    // Input
    int temp, days, weeks, years;
    printf("Number of days : ");  scanf("%d", &days);

    // Algorithm 
    temp = days;
    years = days/365;   days = days%365;
    weeks = days/54;    days = days%54;

    // Output
    printf("%d days = %d years, %d weeks, %d days.", temp, years, weeks, days);
}