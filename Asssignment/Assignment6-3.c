/*
3 — Calculate Shopping Discount
Problem Statement: Accept the total purchase amount and calculate the final payable amount after applying
the following discount. Negative purchase amounts are invalid.

Purchase Amount Discount
Below ₹1000 0%
₹1000 to below ₹5000 10%
₹5000 and above 20%

Expected Output:
• Input: 800 → Payable Amount = 800.00
• Input: 2000 → Payable Amount = 1800.00
• Input: 6000 → Payable Amount = 4800.00
*/

#include <stdio.h>
#include <stdlib.h>

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    fFinalAmount = fAmount;

    if(fAmount < 1000)
    {
        printf("Payable amount = %f", fFinalAmount);
    }
    else if(fAmount >= 1000 && fAmount < 5000)
    {
        fDiscount = 0.1;
        fFinalAmount = fFinalAmount - (fDiscount * fFinalAmount);
        printf("Payable amount = %f", fFinalAmount);
    }
    else if(fAmount > 5000)
    {
        fDiscount = 0.2;
        fFinalAmount = fFinalAmount -(fDiscount * fFinalAmount);
        printf("Payable amount = %f", fFinalAmount);
    }
    else if(fAmount < 0)
    {
        printf("INVALID INPUT");
    }
}

int main()
{
    float fAmount = 0.0f;
    
    printf("Enter purchase amount: ");
    scanf("%f", &fAmount);
    
    CalculateDiscount(fAmount);
    
    return EXIT_SUCCESS;
}