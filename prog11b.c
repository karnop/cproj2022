//  write a C program to find largest of three numbers.
#include <stdio.h>

int larger(int a, int b)
{
    if(a >= b)  return a;
    else   return b;
}

int main()
{
    // Input
    int num1, num2, num3;
    printf("Enter the first number : ");     scanf("%d", &num1);
    printf("Enter the second number : ");    scanf("%d", &num2);
    printf("Enter the third number : ");     scanf("%d", &num3);

    // Algorithm 
    int largest = larger(larger(num1, num2), num3);

    // Output
    printf("%d is the largest of all three numbers.", largest);

}
