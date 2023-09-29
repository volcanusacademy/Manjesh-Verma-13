#include <stdio.h>
void main()
{
    int English, Chemistry, Hindi, Physics, Maths; // defined a integer variable 
    
	float Total=0, Percentage=0;// defined a decimal variable and intialized with zero otherwise it will collect garbage value
 
    printf("Please Enter the Five Subjects Marks : \n");
    
	// Take a integer numbers from user as a input / student marks
	scanf("%d %d %d %d %d", &English, &Chemistry, &Hindi, &Physics, &Maths);
 
    /// total variable collect the total marks of a students
	Total = English + Chemistry + Hindi + Physics + Maths;
    
	// it will calculate the percentage of student
	Percentage = ( Total / 500 ) * 100;
 
    printf("Total Marks = %.2f \n", Total);
    
	printf("Marks Percentage = %.2f", Percentage);
    
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