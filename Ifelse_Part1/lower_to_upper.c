//Program to check whether entered character is in lowercase or not and if yes, then convert it into uppercase
#include<stdio.h>

void main(){
    char ch,lower;

        printf("enter any character ch :- " );
        scanf("%c",&ch);
        
        // 'if'-- conditional statement will check the condition and execute the functionality 
        // and '&&' is like ex maybe or maybe not
        if(ch>='A' && ch<='Z'){
            lower=ch-32; // convert into lowercase with help of its ASCI value
        printf("character is in Lowercase %c ",lower);
        }
        
        else{
        printf("character is not in uppercase");

        }
            
}