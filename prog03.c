// Write a C program to print a block F using hash(#), height : 6 width : 5, 4
#include <stdio.h>

int main()
{
    // Input
    
    // Algorithm 

    // Output
    for(int i=1; i<=6; i++)
    {
        printf("#");

        // width of 5 & 4
        if(i == 1 || i == 3)  
        for(int j = 1; j<(6-i); j++)   printf("#");
        
        printf("\n");
    }
}