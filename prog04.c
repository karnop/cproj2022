// Write a C program to calculate average weight
#include <stdio.h>

int main()
{
    // Input
    float wt1, wt2, avg1, avg2;
    int num1, num2;
    printf("total Weight of item1 : ");   scanf("%f", &wt1);
    printf("total Weight of item2 : ");   scanf("%f", &wt2);
    printf("Purchases of item1 : ");   scanf("%d", &num1);
    printf("Purchases of item2 : ");   scanf("%d", &num2);

    // Algorithm 
    avg1 = wt1/num1;
    avg2 = wt2/num2;

    // Output
    printf("Average weight of item1 : %f\n", avg1);
    printf("Average weight of item2 : %f", avg2);
}