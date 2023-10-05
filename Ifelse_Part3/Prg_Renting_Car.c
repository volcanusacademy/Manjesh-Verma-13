// The project basically gives the user the option to ask if he is renting a car [Y or N]:
// if Y is inputed, then it ask about 'C' for Compact or 'F' for Full-size,
// if the user selects compact the project displays that the user has selected compact and
// if the code displays fullsize the project displays that the user has selected fullsize.
// Then it asks the user if they have a coupon or not by 'Y' or 'N'if the users answer Y 
// for the coupon the price is 7% off on 456.56 for compact car.
// If the user answers N the price is a normal 456.56. 
// The fullsize normal price is 460.50 and the price with a coupon is 7% off on 460.50

#include<stdio.h>

void main()
{
    char option;
    
    char size;
    
    printf("'Y' OR 'No' ");
    
    scanf("%c", &option);
    
    if(option == 'y' || option == 'Y')
    {

        printf("Enter 'C' for Compact  , 'F' for Full-size");
    
        scanf("%c", &size); 
        if(size == 'c' || size =='C')
        {
            printf("User has selected compact");
        }
        else
        {
            printf("User has selected fullsize");
        }
        char  coupon;
        
        printf("Enter 'Y' or 'N' for Coupon ");
    
        scanf("%c", &coupon);
    
        if(coupon == 'Y' || coupon == 'y')
        {
    
        float price ;
    
        price = (7 * 456.56 )/ 100;
    
        printf("%f",price);
        }
        else if(coupon == 'n' || coupon == 'N')
        {
            float fullsize_price ;
            fullsize_price =  (7 * 460.50 )/ 100;
            printf("%f",fullsize_price);
        }
    }
}