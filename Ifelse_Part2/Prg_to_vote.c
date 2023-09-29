#include<stdio.h>
void main()
{
    int age; // defined a integer variable

    char nationality; // defined a character varaible

    printf("If you belong to Indain then press 'I'or 'i' : ");
    
    // Take a Character from user as a input
    scanf("%c",&nationality);
    

    // 'if'-- conditional statement will check the condition and execute the functionality 
 // and '||' is like ex maybe or maybe not

    if(nationality == 'I' || nationality == 'i')
    {
        printf("\n Indian");
    }

    // So, here the user are indian then will collect the user age
    printf("Enter your age: ");
    
    // Take a integer number from user as a input
    scanf("%d", &age);
    
    // Now we check the the user age are not be 18 or above 18
    if( age > 18)
    {
        printf("He or She is eligible to vote");
    }
    
    // condition are false execute the 'else' part 

    else
    {
        printf("He or She is not be eligible to vote");
    }
    
}
 