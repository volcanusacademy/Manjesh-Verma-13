// Program to find out compound interest if principal is greater than or equals to 500 otherwise find out simple interest

#include<stdio.h>

#include<math.h>

void main()
{
    int Principal, Amount ;
    
    float Rate , Time , Compand_Intrest , Simple_Intrest ;

    printf("Enter Principal ");
    
    scanf("%d", &Principal);
    
    printf("Enter Rate ");
    
    scanf("%f",&Rate);
    
    printf("Enter Time ");
    
    scanf("%f",&Time);
    
    if(Principal >= 500)
    {
        Amount  = Principal * (pow((1 + Rate / 100), Time));
        
        Compand_Intrest = Amount - Principal; 
        
        printf("compound intersent is %f" , Compand_Intrest);
    }
    else
    {
        Simple_Intrest = ((Principal* Rate * Time) / 100);
        
        printf("Simple interest is %f",Simple_Intrest);
    }
}