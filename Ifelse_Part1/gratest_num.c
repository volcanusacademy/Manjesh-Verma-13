// check if both numbers are equals or not, if not then find out the greatest number
#include<stdio.h>
void main()
{
    int num1 , num2; // defined a integer varaible
    printf("Enter the two numbers: ");
    
    // Take a two integer number from user as a input

    scanf("%d%d", &num1, &num2);

    
    // 'if'-- conditional statement will check the both two numbers and execute the functionality

    if (num1 == num2)
    {
      printf("Both are equal numbers ");
    }
    // 'else if' check the numbers are grater or not
    else if (num1 > num2)
    { 
      printf("%d is Greater", num1);
    }
     // condition are false execute the 'else' part  
    else
    {
      printf("%d is Greater", num2);
    }  
}