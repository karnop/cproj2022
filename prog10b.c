// Write a C program to check whether an alphabet is a vowel or consonant.
#include <stdio.h>
#include <ctype.h>  // for lowercase function
int main()
{
    // Input
    char c;
    printf("Enter the character : ");
    scanf("%c", &c);

    // Algorithm 
    c = tolower(c);

    // Output
    if(c == 97 || c == 101 || c == 105 || c == 111 || c == 117)    
        printf("The given alphabet is a vowel.");
    else  printf("The given alphabet is a consonant.");
}
