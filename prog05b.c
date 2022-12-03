// Write a C program to swap two variables without using a third variable 
#include <stdio.h>
#include <math.h>

int main()
{
    // Input
    int num1, num2; // x , y
    printf("First number : ");  scanf("%d", &num1);
    printf("Second number : ");  scanf("%d", &num2);

    // Algorithm 
    num1 = num1 + num2;         // num1 = x+y
    num2 = abs(num2 - num1);    // Num2 = |y-x+y| = x
    num1 = num1 - num2;          // num1 =  x+y-x = y

    // Output
    printf("First number : %d\n", num1);
    printf("Second number : %d", num2);
}