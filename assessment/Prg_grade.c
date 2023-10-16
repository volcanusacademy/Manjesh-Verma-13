#include<stdio.h> // This is the input output library of predefined function like printf or scanf

void main() // main function the whole function call the code first
{
    float Percentage=0;// defined a decimal variable and intialized with zero otherwise it will collect garbage value
 
    printf("Enter Percentage: ");
    
    // Take a Percentage from user as a input
    scanf("%f", &Percentage);
    
    
    
    // 'if'-- conditional statement will check the condition and execute the functionality
    if(Percentage >= 90)
    {
        printf("Grade = A++");
    }
    
    
    // 'else if' also check the both condition and execute the functionality
    else if(Percentage >= 80 && Percentage < 90)
    {
        printf("Grade = A");
    }
    else if(Percentage >= 70 && Percentage < 80)
    {
        printf("Grade = B");
    }
    else if(Percentage >= 60 && Percentage < 70)
    {
        printf("Grade = C");
    }
    else if(Percentage >= 50 && Percentage < 60)
    {
        printf("Grade = D");
    }
    //condition are false execute the 'else' part
    else 
    {
        printf("Fail");
    }
                    
}
