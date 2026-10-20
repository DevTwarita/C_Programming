/*
5 — Calculate Employee Bonus
Problem Statement: Accept an employee's monthly salary and completed years of service. Calculate the
bonus using these rules: more than 10 years of service earns a bonus of 15% of monthly salary; 5 to 10 years
earns 10%; less than 5 years earns 5%. Salary must be positive and years of service cannot be negative.

Expected Output:
• Input: 30000 12 → Bonus = 4500.00
• Input: 20000 7 → Bonus = 2000.00
• Input: 10000 2 → Bonus = 500.00
*/

#include <stdio.h>
#include <stdlib.h>
void CalculateBonus(float fSalary, int iYears)
{
    float fBonus = 0.0f;

    if(iYears > 10)
    {
        fBonus = 0.15;
        fSalary = fSalary * fBonus;
        printf("Bonus = %f", fSalary);
    }
    else if (iYears >= 5 && iYears <= 10)
    {
        fBonus = 0.1;
        fSalary = fSalary * fBonus;
        printf("Bonus = %f", fSalary);

    }
    else if(iYears < 5)
    {
        fBonus = 0.05;
        fSalary = fSalary * fBonus;
        printf("Bonus = %f", fSalary);
    }

    if(fSalary < 0 && iYears <0)
    {
        printf("Invalid input");
    }
    

}

int main()
{
    float fSalary = 0.0f;
    int iYears = 0;

    printf("Enter salary and years of service: ");
    scanf("%f %d", &fSalary, &iYears);
    
    CalculateBonus(fSalary, iYears);
    
    return EXIT_SUCCESS;
}