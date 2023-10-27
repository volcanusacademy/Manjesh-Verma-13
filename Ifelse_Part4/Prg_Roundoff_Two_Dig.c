// WAP to round off 2 digit number
#include <stdio.h>

int main() 
{
    int Number, RoundedNumber;

    printf("Enter a two-digit number: ");
    scanf("%d", &Number);

    if (Number < 10 || Number > 99) {
        printf("Please enter a valid two-digit number.\n");
        return 1; // Exit with an error code
    }

    // Calculate the remainder when dividing by 10
    int Remainder = Number % 10;

    // Check if the remainder is greater than or equal to 5
    if (Remainder >= 5) 
    {
        // Round up to the nearest ten
        RoundedNumber = Number + (10 - Remainder);
    } 
    else 
    {
        // Round down to the nearest ten
        RoundedNumber = Number - Remainder;
    }

    printf("Original number: %d\n", Number);
    printf("Rounded number: %d\n", RoundedNumber);

    return 0;
}
