// Write a program to find gross salary of employee if DA is 40%
// and hra is 20% of basic salary. 
#include <stdio.h>

int main()
{
    // input
    float salary;
    printf("Enter the basic salary : ");    scanf("%f", &salary);

    // algorithm
    salary = salary - (0.40*salary) - (0.20*salary);

    // output
    printf("The Gross salary is : %.4f.", salary);
}