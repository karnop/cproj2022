// Write a C program to calculate simple interest
#include <stdio.h>

int main()
{
    // Input
    int time;
    float prin, rate, amnt, si;
    printf("Principal amount : ");  scanf("%f", &prin);
    printf("Rate of Interest : ");  scanf("%f", &rate);
    printf("Time duration(in year(s)) : ");  scanf("%d", &time);

    // Algorithm 
    si = (prin*rate*time)/100;
    amnt = prin + si;
 
    // Output
    printf("Amount to be paid : %f", amnt);
}