// Write a C program to check whether a number is even or odd
#include <stdio.h>

int main()
{
    // Input
    int num;    
    printf("Enter number : ");  scanf("%d", &num);

    // Algorithm 

    // Output
    if(num%2)   printf("%d is odd", num);
    else        printf("%d is even", num);
}