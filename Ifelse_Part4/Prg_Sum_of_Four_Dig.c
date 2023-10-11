//  WAP to find out the sum of individual digits of a 4 digit number and if sum is more than 9 then again find out the sum of digits.  

#include <stdio.h>

int main() {
    int number, digit, sum = 0;

    printf("Enter a 4-digit number: ");
    scanf("%d", &number);

    if (number < 1000 || number > 9999) {
        printf("Please enter a valid 4-digit number.\n");
        return 1; // Exit with an error code
    }

    // Calculate the sum of individual digits
    while (number > 0) {
        digit = number % 10; // Get the last digit
        sum += digit;
        number /= 10; // Remove the last digit
    }

    // Check if the sum is more than 9 and continue summing its digits
    while (sum > 9) {
        int tempSum = 0;
        while (sum > 0) {
            digit = sum % 10; // Get the last digit
            tempSum += digit;
            sum /= 10; // Remove the last digit
        }
        sum = tempSum;
    }

    printf("Sum of individual digits: %d\n", sum);

    return 0;
}
