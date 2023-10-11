//  WAP to program to take 6 digit number from user and checks whether it is palindrome or not

#include <stdio.h>

int main() {
    int num, originalNum, reverseNum = 0, remainder;

    // Input a 6-digit number from the user
    printf("Enter a 6-digit number: ");
    scanf("%d", &num);

    // Store the original number for comparison later
    originalNum = num;

    // Reverse the number
    while (num > 0) 
    {
        remainder = num % 10;
        reverseNum = reverseNum * 10 + remainder;
        num = num / 10;
    }

    // Check if the original number is equal to its reverse
    if (originalNum == reverseNum && originalNum >= 100000 && originalNum <= 999999) 
    {
        printf("The entered number %d is a palindrome.\n", originalNum);
    } 
    else 
    {
        printf("The entered number %d is not a palindrome or is not a 6-digit number.\n", originalNum);
    }

    return 0;
}
