// Write a C program to convert a given integer in seconds to hours, minutes and seconds
#include <stdio.h>

int main()
{
    // Input
    int time, hrs, mins, secs;
    printf("Seconds : ");  scanf("%d", &secs);
    time = secs;

    // Algorithm 
    hrs = secs/(3600);
    secs = secs%(3600);
    mins = secs/60;
    secs = secs%60;

    // Output
    printf("%d seconds = %d hours, %d mins, and %d seconds.", time, hrs, mins, secs);
}