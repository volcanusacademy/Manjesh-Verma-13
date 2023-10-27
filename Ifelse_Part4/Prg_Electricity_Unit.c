// Write a program for generating electricity Bill. Accept last month unit and current monthunit from user, then calculate and print bill amount according to following condition
//For units
//0-100 charges 2 rs/unit
//101-200 charges 3rs/unit
//201-300 4rs/unit
//>300 charges 5rs/unit

#include <stdio.h>

int main() 
{
    int lastMonthUnits, currentMonthUnits;
    float totalBill = 0;

    printf("Enter the last month's units: ");
    scanf("%d", &lastMonthUnits);

    printf("Enter the current month's units: ");
    scanf("%d", &currentMonthUnits);

    // Calculate the difference in units
    int unitsConsumed = currentMonthUnits - lastMonthUnits;

    if (unitsConsumed <= 0) 
    {
        printf("Invalid input. Current month's units should be greater than last month's units.\n");
        return 1; // Exit with an error code
    }

    // Calculate the bill amount based on the given conditions
    if (unitsConsumed <= 100) 
    {
        totalBill = unitsConsumed * 2;
    } 
    else if (unitsConsumed <= 200) 
    {
        totalBill = 100 * 2 + (unitsConsumed - 100) * 3;
    } 
    else if (unitsConsumed <= 300) 
    {
        totalBill = 100 * 2 + 100 * 3 + (unitsConsumed - 200) * 4;
    } 
    else 
    {
        totalBill = 100 * 2 + 100 * 3 + 100 * 4 + (unitsConsumed - 300) * 5;
    }

    printf("Total bill amount: Rs. %.2f\n", totalBill);

    return 0;
}
