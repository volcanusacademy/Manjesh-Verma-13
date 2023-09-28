// Program to check whether entered character is a digit or not and if yes, then replace it by *
#include<stdio.h>
void check(char c){
    if(c >='0' && c <= '9'){
        printf("character is a digit\n");
        replace(c);
    }
    else{
        printf("character is not a digit \n");
    }

}
// replace a number by astrick *
void  replace(char c){
     c = '*';
    printf("%c",c);
}


void main(){
    char c;
    printf("enter any character :- ");
    scanf("%c",&c);

    check(c);
}