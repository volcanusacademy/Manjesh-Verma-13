//  Program to check whether entered character is an alphabet or not
#include<stdio.h>
void main()
{
    char chr ; // defined a character varaible

    printf(" Enter the Character: ");
    
    // Take a Character from user as a input
    scanf("%c", &chr); 

    // 'if'-- conditional statement will check the both two conditions and execute the functionality
    if (chr >= 'A' && chr <= 'Z' || chr >= 'a' && chr <= 'z')
    {
        printf("Character is Alphabet ");
    }
    // condition are false execute the 'else' part 
    else 
    {
        printf("Character is Not Alphabet ");
    }
}