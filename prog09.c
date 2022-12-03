// Write a C program to convert celsius to fahrenheit and vice versa
#include <stdio.h>

int main()
{
    // Input
    int choice;
    float cel, fhr;
    printf("Enter choice (1 for Cel. 2 for fhr): ");  scanf("%d", &choice);

    // Algorithm 
    switch(choice)
    {
        case 1: 
            printf("Enter temperature in celsius : ");
            scanf("%f", &cel);
            fhr = (cel*1.8)+32;
            printf("%f C = %f F", cel, fhr);
            break;

        case 2:
            printf("Enter temperature in fahrenheit : ");
            scanf("%f", &fhr);
            cel = (fhr-32)*(5.0/9);
            printf("%f F = %f C", fhr, cel);
            break;

        default : 
            printf("Incorrect Option! ");
    }

    // Output
}