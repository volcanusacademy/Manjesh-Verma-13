#include<stdio.h>
void main()
{
    int num1, num2, num3; // defined a three integer variable

    printf("Enter three numbers: ");
    
    // Take a three integer number from user as a input

    scanf("%d%d%d", &num1, &num2, &num3);


    // 'if'-- conditional statement will check the condition and execute the functionality 
    // and '&&' is like ex maybe or maybe not

    if(num1 > num2 && num1 > num3)
    {
        printf("%d is grater than num1 and num2",num1);
    }
    
    
    // 'else if'-- conditional statement will check the condition and execute the functionality
    else if (num2 > num1 && num2 > num3)
    {
        printf("%d is grater than num1 and num2",num2);
    }
    
    // condition are false execute the 'else' part 

    else
    {
        printf("%d is grater than num1 and num2",num3);
    }
    
    
}