// Write a program to calculate gross salary and net salary.
// Accept basic salary from user,TA(Travel Allowance) i.e 10% of basic salary, 
//PF(Provident Fund) i.e 7.8% of basic , DA(Dearness Allowance) is 500, gs=basic+da+ta; ns=gs-pf;

#include<stdio.h>
void main()
{
    // Defined a float variables
    float Gross_Salary , Net_Salary , Basic_Salary , Dearness_Allowance = 500 , Travel_Allowance , Provident_Fund;

    printf(" Enter the Basic Salary: ");

    // Take a float number from user as a input
    scanf("%f", &Basic_Salary);

    Travel_Allowance = (Basic_Salary * 10) / 100; // TA = BA * 10

    Provident_Fund = (Basic_Salary * 78) / 1000;// PR = BS *7.8

    Gross_Salary = Basic_Salary + Dearness_Allowance + Travel_Allowance; // GS = BS + DA + TA 

    printf("\n Gross Salary: %2f ", Gross_Salary);

    printf("\n Dearness Allowance: %2f ", Dearness_Allowance);

    printf("\n Total Allowance: %2f ", Travel_Allowance);

    printf("\n Provident Fund: %2f ", Provident_Fund);

    Net_Salary = Gross_Salary - Provident_Fund; // NS = GS = PF

    printf("\n Net Salary: %f  ", Net_Salary);
}