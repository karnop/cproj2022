// Write a C program to check whether given triangle is equi, iso, or scalene
#include <stdio.h>

int main()
{
    // Input
    int s1, s2, s3;
    printf("First side  : ");  scanf("%d", &s1);
    printf("Second side : ");  scanf("%d", &s2);
    printf("Third side  : ");  scanf("%d", &s3);

    // Algorithm 
    int temp = (s1^s2^s3);
    
    // Output
    if(temp == s1 && temp == s2 && temp == s3)  printf("Given triangle is equilateral.");
    else if(temp == s1 || temp == s2 || temp == s3) printf("Given triangle is isosceles.");
    else     printf("Given triangle is scalene.");   
}