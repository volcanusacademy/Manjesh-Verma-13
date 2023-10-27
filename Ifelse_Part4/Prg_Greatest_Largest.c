//  WAP to accept 4 digit number and find out the greatest and smallest digit from it.
#include <stdio.h>

int main() 
{
    int number, digit, greatest, smallest;

    printf("Enter a 4-digit number: ");
    scanf("%d", &number);

    if (number < 1000 || number > 9999) 
    {
        printf("Please enter a valid 4-digit number.\n");
        return 1; // Exit with an error code
    }

    // Initialize largest and smallest with the first digit
    greatest = smallest = number % 10;

    // Loop through each digit of the number
    while (number > 0) 
    {
        digit = number % 10; // Get the last digit

        // Check if the digit is greater than the current largest
        if (digit > greatest) 
        {
            greatest = digit;
        }

        // Check if the digit is smaller than the current smallest
        if (digit < smallest) 
        {
            smallest = digit;
        }

        number /= 10; // Remove the last digit
    }

    printf("Largest digit: %d\n", greatest);
    printf("Smallest digit: %d\n", smallest);

    return 0;
}
