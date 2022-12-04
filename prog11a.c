// Write a C program to find smallest of the two numbers
#include <stdio.h>

int main()
{
    // Input
    int num1, num2;
    printf("First number : ");  scanf("%d", &num1);
    printf("Second number : ");  scanf("%d", &num2);

    // Algorithm 
    int diff = num1 - num2;

    // Output
    if(diff < 0)    printf("%d is smaller than %d.", num1, num2);
    if(diff > 0)    printf("%d is smaller than %d.", num2, num1);
    else            printf("Both numbers are equal.");
}