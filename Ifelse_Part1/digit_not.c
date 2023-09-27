//Program to check whether entered character is a digit or not
#include<stdio.h>
void main()
{
    char chr ; // defined a character varaible

    printf("Enter the Character: ");
    
    // Take a Character from user as a input
    scanf("%c", &chr);

// 'if'-- conditional statement will check the both two conditions and execute the functionality

    if ( chr >= '0' && chr <= '9')
    {
        printf("Character are Digit");
    }
    
    //condition are false execute the 'else' part
    else 
    {
        printf("Character are Not Digit");
    }
}