//Program to check whether entered character is in uppercase or not 
#include<stdio.h>
void main()
{
    char chr; // defined a character varaible 

    printf("Enter the Character: ");
    
    // Take a Character from user as a input
    scanf("%c", &chr);

    
    // 'if'-- conditional statement will check the condition and execute the functionality 
    // and '&&' is like ex maybe or maybe not

    if ( chr >= 'A' &&  chr <= 'Z' )
    {
        printf("Character is UpperCase ");
    }
    
    // condition are false execute the 'else' part 
    else
    {
        printf("Character is Not UpperCase ");
    }
}