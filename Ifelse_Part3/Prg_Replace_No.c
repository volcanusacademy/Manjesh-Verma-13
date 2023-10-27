// Write a program that accepts 5 digit number and replace first and last digit.Ex : 45872 o/p: 25874

#include<stdio.h>
void main()
{
    int Num, First, Last, Sum;
    
    printf("Enter the Number: ");
    
    scanf("%d", &Num);
    
    First = Num / 10000;
    
    Num = Num % 10000;
    
    Last = Num % 10;
    
    Num = Num / 10;
    
    Sum=Last * 10000 + Num * 10 + First;

    printf("\n %d", Sum);

}



