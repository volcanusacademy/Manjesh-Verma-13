// WAP to round off 3 digit number

#include <stdio.h>

int main() {
    int Number, RoundedNumber;

    printf("Enter a three-digit number: ");
    scanf("%d", &Number);

    if (Number < 100 || Number > 999) {
        printf("Please enter a valid three-digit number.\n");
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