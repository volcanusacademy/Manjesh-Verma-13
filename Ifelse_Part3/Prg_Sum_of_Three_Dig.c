#include <stdio.h>

void main() 
{
    int Num, First, Second, Third, Sum;

    // Take a three-digit number from user
    printf("Enter a Three Digit Number: ");
    
    scanf("%d", &Num);

    // Extract individual digits
    
    First = Num % 10;
    
    Num = Num / 10;
    
    Second = Num % 10;
    
    Third = Num / 10;

    // Calculate the sum of individual digits
    
    Sum = First + Second + Third;

    // Print the result
    printf("\n Sum of digits: %d", Sum);

}
