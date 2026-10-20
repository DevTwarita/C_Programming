/*
1 — Calculate Electricity Bill
Problem Statement: Accept the number of electricity units consumed and calculate the total bill 
using the following slab-wise rates. Each slab rate applies only to units within that slab.

Units
consumed Rate
First 100 units ₹5 per unit
Next 100 units ₹7 per unit
Above 200 units ₹10 per unit

Negative unit consumption is invalid.
Expected Output:
• Input: 80 → Bill = 400.00
• Input: 150 → Bill = 1050.00
• Input: 250 → Bill = 2500.00
*/

#include <stdio.h>
#include <stdlib.h>

void CalculateElectricityBill(int iUnits)
{
    float fBill = 0.0f;

    if(iUnits <= 100)
    {
        fBill = iUnits * 5;
        printf("Bill %f", fBill);
    }
    else if (iUnits > 100 && iUnits <= 200)
    {
        fBill = iUnits * 7;
        printf("Bill %f", fBill);
    }
    else if (iUnits > 200)
    {
        fBill = iUnits * 10;
        printf("Bill %f", fBill);
    }
}

int main()
{
    int iUnits = 0;
    
    printf("Enter consumed units: ");
    scanf("%d", &iUnits);
    
    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}