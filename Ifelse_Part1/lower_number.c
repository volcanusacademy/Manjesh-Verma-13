//  Program to check whether entered character is in lowercase or not 
#include<stdio.h>
void main()
{
    char chr ; // defined a character varaible

    printf("Enter the Character: ");
    
    scanf("%c",&chr);

    
    //'if'-- conditional statement will check the condition and execute the functionality and
    // '&&' is like ex maybe or maybe not

    if (chr >='a' && chr <='z')
    {
        printf("Character is LowerCase");
    }
    
    // condition are false execute the 'else' part 
    else
    {
        printf("Character is Not LowerCase");
    }
}