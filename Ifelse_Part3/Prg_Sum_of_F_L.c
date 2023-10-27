//Write a program that accepts 6 digit number and find out the sum of first and last digit
#include<stdio.h>
void main()
{
    int Num , First , Last , Sum;

    printf("Enter the Number: ");
    
    scanf("%d",&Num);

    Last = Num % 10;
    First = Num / 100000;
    Sum = First + Last;

    printf("Sum of First and Last Digit is: %d\n",Sum);
}
