// Write a C program to swap two variables using a third variable 
#include <stdio.h>

int main()
{
    // Input
    int num1, num2, temp;
    printf("First number : ");  scanf("%d", &num1);
    printf("Second number : ");  scanf("%d", &num2);

    // Algorithm 
    temp = num1;    // num1 == temp = x    num2 = y 
    num1 = num2;    // num1 == num2 = y    temp = x
    num2 = temp;    // num1 = y    num2 == temp = x 

    // Output
    printf("First number : %d\n", num1);
    printf("Second number : %d", num2);
}