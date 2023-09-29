#include<stdio.h>
void main()
{
    int num; // defined a integer variable

    printf("Enter the number: ");
    
    // Take a integer number from user as a input
    scanf("%d",&num);
    
    // 'if'-- conditional statement will check the condition and execute the functionality 
 // and '&&' is like ex maybe or maybe not
    if (num >= 50 && num <= 100)
    {
        printf("Number lies in between 50 and 100 ");
    }
    
    // condition are false execute the 'else' part
    else
    {
        printf("Number is not ");
    }
}
 