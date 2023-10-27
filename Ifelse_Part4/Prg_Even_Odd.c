// WAP to count number of even and odd digits in a 5 digit number

#include <stdio.h>

int main() {
    int number, digit, evenCount = 0, oddCount = 0;

    printf("Enter a 5-digit number: ");
    scanf("%d", &number);

    if (number < 10000 || number > 99999) {
        printf("Please enter a valid 5-digit number.\n");
        return 1; // Exit with an error code
    }

    while (number > 0) {
        digit = number % 10; // Get the last digit

        if (digit % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }

        number /= 10; // Remove the last digit
    }

    printf("Number of even digits: %d\n", evenCount);
    printf("Number of odd digits: %d\n", oddCount);

    return 0;
}
