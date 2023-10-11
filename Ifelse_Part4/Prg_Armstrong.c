//  WAP to program to take 3 digit number from user and checks whether it is armstrong or not
#include <stdio.h>
#include <math.h>

int main() {
    int number, originalNumber, remainder, result = 0;

    // Input a 3-digit number from the user
    printf("Enter a 3-digit number: ");
    scanf("%d", &number);

    // Store the original number for comparison later
    originalNumber = number;

    // Check if the number is a 3-digit number
    if (number < 100 || number > 999) 
    {
        printf("Please enter a valid 3-digit number.\n");
    } 
    else 
    {
        // Calculate the Armstrong number
        while (originalNumber != 0) 
        {
            remainder = originalNumber % 10;
            result += pow(remainder, 3);
            originalNumber /= 10;
        }

        // Check if it is an Armstrong number
        if (result == number) 
        {
            printf("%d is an Armstrong number.\n", number);
        } 
        else 
        {
            printf("%d is not an Armstrong number.\n", number);
        }
    }

    return 0;
}
