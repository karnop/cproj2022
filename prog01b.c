// Write a C program to add thre numbers 
#include <stdio.h>

int main()
{
    // Input
    int num1, num2, num3, sum;
    printf("First number : ");  scanf("%d", &num1);
    printf("Second number : ");  scanf("%d", &num2);
    printf("Third number : ");  scanf("%d", &num3);

    // Algorithm 
    sum = num1+num2+num3;

    // Output
    printf("%d + %d + %d = %d", num1, num2, num3, sum);
}