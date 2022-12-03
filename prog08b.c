// Write a C program to check whether given triangle is right angled, obtuse or scalene
#include <stdio.h>

int main()
{
    // Input
    int a1, a2, a3, maxx;
    printf("First angle  : ");  scanf("%d", &a1);
    printf("Second angle : ");  scanf("%d", &a2);
    printf("Third angle  : ");  scanf("%d", &a3);

    // Algorithm 
    
    // Output
    if(a1 > 90 || a2 > 90 || a3 > 90)   printf("This is an obtuse angled triangle.");
    else if(a1 == 90 || a2 == 90 || a3 == 90)  printf("This is a right angled triangle.");
    else printf("This is an acute angled triangle.");
    
}