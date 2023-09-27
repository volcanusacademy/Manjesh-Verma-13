//Write a c program to display table of given number using for loop Example -> 9 x 1 = 9 9 x 2 = 18 9 x 3 =27 ... etc
#include<stdio.h>
void main()
{
    int num; // defined a integer variable
    int i,table=0;
    //here we are intailized table varaible firstly,
    // if you are not intailized it will collect garage value
    // i for loop iteration help and its varaible also declared mandetory 


    printf("Enter the number:");
    
    // Take a integer number from user as a input

    scanf("%d",&num);

    // This 'for loop' exexute the iteration or
    // also incremented the value to use increment operater '++'

    for( i = 1; i <= 10; i++)
    {
        table = num * i;
        printf("\n %d * %d = %d", num, i, table);
    }
    
}