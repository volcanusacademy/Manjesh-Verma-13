//  Program to print characters of all the ASCII values from 91 to 96
#include<stdio.h>
void main()
{
    int chr; // Take a Character from user as a input
    
    int i; // i for loop iteration help and its varaible also declared mandetory

    // This 'for loop' exexute the iteration or
    // also incremented the value to use increment operater '++'

    for(i=91;i<=96;i++) 
    {
        // '%c' print the character and '%d' print the ASCI value of a character 
        // one thing actually noticeable '\n' is for line changing on the output screen
        printf("ASCII value of character %c = %d \n", i, i);
    }

}