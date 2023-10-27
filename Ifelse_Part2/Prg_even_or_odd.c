#include<stdio.h>
void main()
{
    int num; // defined a integer variable


    printf("Enter the number: ");
    
    // Take a integer number from user as a input
    scanf("%d",&num);

    // 'if'-- conditional statement will check the condition and execute the functionality

    if(num % 2 ==0)
    {
        printf("Even Number ");
    }
    
    // condition are false execute the 'else' part 

    else
    {
        printf("Odd Number ");
    }
}