#include<stdio.h>
void main()
{
    char chr; // defined a character varaible

    printf("Enter the character: ");
    
    // Take a Character from user as a input
    scanf("%c",&chr);
     

    // 'if'-- conditional statement will check the condition and execute the functionality 
 // and we will use '||' operator also 
 
    if (chr == '!' || chr == '@' || chr == '#' || chr == '$' || chr == '%' || chr == '^' || chr == '&' || chr == '*')
    {
        printf("character falls in the category of special symbol");
    }
   
   
    // condition are false execute the 'else' part 

    else
    {
        printf("character not falls in the category of special symbol");
    }
}