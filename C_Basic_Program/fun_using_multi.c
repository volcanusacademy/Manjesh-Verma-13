// Write a program in c to for calculator, create separate function for each type of calculation
#include<stdio.h>
void addition(int n1, int n2) // formal parameters -- temp varaible
{
    printf("\n The result of addition is %d",n1+n2);
}

void substraction(int n1, int n2)
{
    printf("\n The result of substraction is %d",n1-n2);
}

void multiplication(int n1, int n2)
{
    printf("\n The result of multiplication is %d",n1*n2);
}

void divide(int n1, int n2)
{
    printf("\n The result of divide is %d",n1/n2);
}

void main()
{
    int num1,num2; // actual parameters // variable declaration 
    
    printf("\n Entet the two numbers: ");
    scanf("%d%d", &num1, &num2);
     
   substraction(num1,num2);
    addition(num1,num2); // function calling 
    multiplication(num1,num2);
    divide(num1,num2);
}   