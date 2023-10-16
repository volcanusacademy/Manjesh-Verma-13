#include <stdio.h>
void main()
{ 
    
	float Percentage;// defined a decimal variable and intialized with zero otherwise it will collect garbage value
 
    printf("Please Enter the Percentage : \n");
    
	// Take a integer numbers from user as a input / student marks
	scanf("%f", &Percentage);
 
    // 'if'-- conditional statement will check the condition and execute the functionality
	if ( Percentage >= 90)
    {
    	printf( " \n Grade A");
	}
	
	 
    // 'else if' also check the condition and execute the functionality
	else if ( Percentage >= 80)
    {
    	printf("\n Grade B");
	}
	else if ( Percentage >= 70 )
    {
    	printf(" \n Grade C");
	}
	else if ( Percentage >= 60)
    {
    	printf("\n Grade D");
	}
	else if ( Percentage >= 40)
    {
    	printf("\n Grade E");
	}
	
	//condition are false execute the 'else' part
	else 
    {
    	printf("\n Fail");
	} 
}
