/*
5.Write a program which accept number from user and return difference between
summation of all its factors and non factors.

Input : 12
Output : -34 (16 - 50)

Input : 10
Output : -29 (8 - 37)
*/


#include<stdio.h>
#include<stdlib.h>

int FactDiff(int iNo)
{
    int iFact = 0,iSumFactors = 0, iSumNonFactors = 0, iFactDiff = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for(iFact = 1; iFact < iNo; iFact++)
    {
        if((iNo % iFact) == 0)
        {
            iSumFactors = iSumFactors + iFact;
        }
        if((iNo % iFact) != 0) //non factors
        {
            iSumNonFactors = iSumNonFactors + iFact;
        }
    }

    iFactDiff = iSumFactors - iSumNonFactors;

    return iFactDiff;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);
    printf("%d", iRet);

    return EXIT_SUCCESS;
}