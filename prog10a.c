// Write a C program to check whether character is alphabet/ digit
#include <stdio.h>

int main()
{
    // Input
    char c;
    scanf("%d", &c);

    // Algorithm 
    
    // Output
    if(c >= 48 && c <= 57)          printf("The given character is a digit.");
    else if(c >= 65 && c <= 90)     printf("The given character is an uppercase alphabet.");
    else if(c >= 97 && c <= 122)    printf("The given character is a lowercase character.");
    else                            printf("The given character is not an alphabet or digit.");
}
