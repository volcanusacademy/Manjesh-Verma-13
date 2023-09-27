// Write a program in c to find the sum of all even numbers starting from 1 to 100
#include<stdio.h>
void main()
{
    int i,sum=0; //here we are intailized count varaible firstly,
                 // if you are not intailized it will collect garage value
                 // i for loop iteration help and its varaible also declared mandetory

    
    // This 'for loop' exexute the iteration or check number is grater than equal to or not and
    // also incremented the value to use increment operater '++'

    for( i = 1; i <= 100; i++)
    {
        
        // 'if'-- conditional statement will check the condition and execute the functionality

        if(i%2==0)
        {
            printf("\n %d", i);
            
            // sum variable are store the value of that we are adding on this variable
            sum=sum+i; 
           
        }
    }
    printf("\n sum of even numbers from 1 to 100 is %d\n", sum);
}