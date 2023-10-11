//Write a program in C to check whether the number is prime or not? take input from user use if else

#include<stdio.h>
void main()
{
    int num ; // defined a number varaible

    //here we are intailized count varaible firstly, if you are not intailized it will collect garage value
    int count=0 , i; 

    printf("Enter a number:");
    
    // Take a integer number from user as a input
    scanf("%d", &num);
    
    
    // This 'for loop' exexute the iteration or check number is grater than equal to or not and
    // also incremented the value to use increment operater '++' 
    for(i = 1; i <= num; i++)
    {
        
    // 'if'-- conditional statement will check the condition and store value to count variable
        if( num % i == 0)
        {
            count++;
        }
    }
     // 'if'-- conditional statement will check the condition and execute the functionality

    if( count == 2)
    {
        printf("Prime Number");
    }
    
    // condition are false execute the 'else' part
    else
    {
        printf("Not Prime Number");
    }
}