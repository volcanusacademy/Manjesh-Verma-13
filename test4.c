//Write a program in C language to add, substract, multiply, divide the given number using suitable data type and variables


#include<stdio.h> // This is predefined function library means predefined funtion like printf()
void main() // This is main function
{
    int num1,num2; // The given number is taken in a integer type of varible so, the num1/num2 are variable
    int add,sub; // This is a variables to store the value of resultant variable
    float div,mul; // This is a suitable variables for collect each values its means like decimal values 
    printf("Enter the First Number: "); // This is message see on the output screen
    scanf("%d",&num1); // This function is take a input from user
    printf("Enter the Second Number: ");
    scanf("%d",&num2);
    
    add=num1+num2; // In which the addition two numbers over here
    sub=num1-num2; // In which the subtraction two numbers over here
    mul=num1*num2;// In which the multiplication two numbers over here
    div=num1/num2; // In which the division two numbers over here
    
    printf("Addition of two numbers is: %d",add); // We print this result to output screen
    printf("\n Subtraction of two numbers is: %d",sub); 
    printf("\n Multiplication of two numbers is: %d",mul);
    printf("\n Division of two numbers is: %d",div);
}