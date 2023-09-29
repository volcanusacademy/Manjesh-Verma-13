#include<stdio.h>
void main()
{
    int num1 , num2; // defined a integer variable


    printf("Enter the first number: ");
    
    // Take a integer number from user as a input

    scanf("%d",&num1);
    
    printf("Enter the second number: ");
    
    scanf("%d",&num2);

    // 'if'-- conditional statement will check the condition and execute the functionality


    if(num1 % num2 ==0)
    {
        printf("Divisible by Second Number ");
    }
    
    // condition are false execute the 'else' part 

    else
    {
        printf("Not Divisible ");
    }
}