#include<stdio.h>
void main()
{
    int Num , Reverse=0 , Remender=0;

    printf("Enter the Number: ");
    
    scanf("%d",&Num);

    while(Num !=0)
    {
        Remender = Num % 10;
        Reverse = Reverse * 10 + Remender;
        Num = Num / 10;
    }
    printf("Reverse Number is: %d\n",Reverse);
}