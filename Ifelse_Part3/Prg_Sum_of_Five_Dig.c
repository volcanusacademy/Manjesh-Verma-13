//Write a program that accepts five digit number and find out the sum of all the individual digits
#include <stdio.h>

void main() 
{
    int Num, Digit, Sum = 0;

    // Prompt the user to enter a five-digit number
    printf("Enter a five-digit number: ");
    
    scanf("%d", &Num);

    // Check if the entered number is a five-digit number
    
    if (Num < 10000 || Num > 99999) 
    {
        printf("Invalid input. Please enter a five-digit number.\n");
        
    }

    // Calculate the sum of individual digits
    while (Num > 0) 
    {
        Digit = Num % 10; // Get the last digit
        Sum += Digit;     // Add the digit to the sum
        Num /= 10;        // Remove the last digit
    }

    // Display the sum of individual digits
    
    printf("Sum of individual Digits: %d\n", Sum);

}
