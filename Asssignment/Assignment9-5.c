/*
5. Write a program which returns difference between Even factorial and odd factorial
of given number.

Input : 5
Output : -7 (8 - 15)

Input : -5
Output : -7 (8 - 15)

Input : 10
Output : 2895 (3840 - 945)
*/

#include<stdio.h>
#include<stdlib.h>

int OddFactorial(int iNo)
{
    int iCnt = 0, iFactEven = 0, iFactOdd = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1, iFactEven = 1, iFactOdd = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iFactEven = iFactEven * iCnt;
        }
        else
        {
            iFactOdd = iFactOdd * iCnt;
        }
    }

    return (iFactEven - iFactOdd);
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number: ");
    scanf("%d", &iValue);

    iRet = OddFactorial(iValue);
    
    printf("Odd Factorial of number is %d", iRet);

    return EXIT_SUCCESS;
}