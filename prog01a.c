// Write a C program to add two numbers 
#include <stdio.h>

int main()
{
    // Input
    int num1, num2, sum;
    printf("First number : ");  scanf("%d", &num1);
    printf("Second number : ");  scanf("%d", &num2);

    // Algorithm 
    sum = num1+num2;

    // Output
    printf("%d + %d = %d", num1, num2, sum);
}