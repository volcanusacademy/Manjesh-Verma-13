//  A cashier has some amount of money(e.g. 4526).Write a program to calculate out how many currency of 
// Rs.1000,Rs.500,Rs100, Rs50, Rs20, Rs10, Rs5, Rs2, Rs1 required.

#include<stdio.h>
void main()
{
    // defined a integer variable
    int Num , One_Thousand=0, One_Handred=0 , Five_Hundred=0, Fifty=0, Twenty=0, Ten=0, Five=0, Two=0, One=0;  
    
    printf(" Enter the Number: ");
    
    // Take a integer number from user as a input

    scanf("%d", &Num);

    // This 'while loop' exexute the iteration or check number is not equal to zero

    while(Num != 0)
    {
        if(Num >= 1000) // If number is grater than equal to 1000
        {
            Num = Num - 1000;
            One_Thousand += 1; // adding in defined variable
        }
        else if (Num >= 500 && 1000) // check number is greater than equal to 500 &100
        {
            Num = Num - 500;
            Five_Hundred += 1; // adding in defined variable
        }
        else if (Num >= 100 && 500)
        {
            Num = Num - 100;
            One_Handred += 1;
        }
        else if (Num >= 50 && 100)
        {
            Num = Num - 50;
            Fifty += 1;
        }
        else if (Num >= 20 && 50)
        {
            Num = Num - 20;
            Twenty += 1;
        }
        else if (Num >= 10 && 20)
        {
            Num = Num - 10;
            Ten += 1;
        }
        else if (Num >= 5 && 10)
        {
            Num = Num - 5;
            Five += 1;
        }
        else if (Num >= 2 && 5)
        {
            Num = Num - 2;
            Two += 1;
        }
        else if (Num >= 1 && 2)
        {
            Num = Num - 1;
            One += 1;
        }
        else // here we print the space for else part
        {
            printf("- - - - - - - - - ");
        }
    }
    printf("\n Number of Currency of 1000: %d", One_Thousand);

    printf("\n  Number of Currency of 500: %d", Five_Hundred);

    printf("\n Number of Currency of 100: %d", One_Handred);

    printf("\n Number of Currency of 50: %d", Fifty);

    printf("\n Number of Currency of 20: %d", Twenty);

    printf("\n Number of Currency of 10: %d", Ten);

    printf("\n Number of Currency of 5: %d", Five);

    printf("\n Number of Currency of 2: %d", Two);

    printf("\n Number of Currency of 1: %d", One);
}