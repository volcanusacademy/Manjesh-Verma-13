#include<stdio.h>
void main()
{
    int num1 , num2; // defined a integer variable and  firstly we intialized with zero otherwise it will collect garbage value 

    int Add=0 , Mul=0 , Sub=0 , Div=0;

    printf("Enter the First Number: ");
    
    
    // Take a integer number from user as a input 
    scanf("%d" , &num1);


    printf("Enter the Second Number: ");
    scanf("%d" , &num2);

    
    // So here we create varibles where we store the resultant values
    Add=num1+num2;

    printf("\n Addition of Two Numbers Is: %d", Add);

    Sub=num1-num2;

    printf("\n Substraction of Two Numbers Is: %d", Sub);

    Mul=num1*num2;

    printf("\n Multiplication of Two Numbers Is: %d", Mul);

    Div=num1/num2;

    printf("\n Division of Two Numbers Is: %d", Div);
}