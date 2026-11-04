/*
4.Write a program which accept number from user and return multiplication of all
digits.

Input : 2395
Output : 270

Input : 1018
Output : 8

Input : 9440
Output : 144

Input : 922432
Output : 864
*/

#include<stdio.h>
#include<stdlib.h>

int MultDigits(int iNo)
{
    int iDigit = 0;
    int iMultDigits = 1;

    if(iNo == 0)
    {
        return 0;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        if(iDigit != 0)
        {
        iMultDigits = iDigit * iMultDigits;
        }
    }    
   
    return iMultDigits;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number: \n");
    scanf("%d", &iValue);

    iRet = MultDigits(iValue);

    printf("%d", iRet);

    return EXIT_SUCCESS;
}