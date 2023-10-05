#include<stdio.h>
void main()
{
    int Num , First , Second, Third , Four , Sum;

    printf("Enter the Number: ");
    
    scanf("%d",&Num);

    Four = Num % 10;
    First = Num / 1000;
    Second = (Num / 100) % 10;
    Third = (Num / 10) % 10;
    
    Sum = First + Second + Third + Four;

    printf("Sum of Four Digit Number is: %d\n",Sum);
}