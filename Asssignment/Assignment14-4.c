/*
4.Write a program which accept number from user and return summation of all its
non factors.

Input : 12
Output : 50

Input : 10
Output : 37
*/

#include<stdio.h>
#include<stdlib.h>

int SumNonFact(int iNo)
{
    int iFact = 0, iSumNonFact = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for(iFact = 1; iFact < iNo; iFact++)
    {
        if((iNo % iFact) != 0) //non factors
        {
            iSumNonFact = iSumNonFact + iFact;
        }
    }

    return iSumNonFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);
    printf("%d", iRet);

    return EXIT_SUCCESS;
}