//  Write a C program to implement a simple Calculator.
#include <stdio.h>

int main()
{
    // Input    // Algorithm // Output
    int choice, num1, num2; 
    int sum, diff, quotient, rem, prod;
    do
    {
        // menu
        printf("\nEnter 1 for addition. \n");
        printf("Enter 2 for subtraction. \n");
        printf("Enter 3 for multiplication. \n");
        printf("Enter 4 for division. \n");
        printf("Enter 5 for remainder. \n");
        printf("Enter 0 to exit. \n");
        printf("\t Choice : "); scanf("%d", &choice);

        // working
        printf("Enter the first number : ");    scanf("%d", &num1);
        printf("Enter the second number : ");    scanf("%d", &num2);
        switch(choice)
        {
            case 1 :
                sum = num1 + num2;
                printf("Sum : %d", sum);
                break;

            case 2 :
                diff = num1 - num2;
                printf("Difference : %d", diff);
                break;

            case 3 :
                prod = num1 * num2;
                printf("Product : %d", prod);
                break;
            
            case 4 :
                quotient = num1 / num2;
                printf("Quotient : %d", quotient);
                break;

            case 5 :
                rem = num1 % num2;
                printf("Remainder : %d", rem);
                break;

            default :
                printf("Enter a  valid choice.");
        }
    }
    while(choice != 0);
}