/*
1.Write a program which accept number from user and return the count of even
digits.

Input : 2395
Output : 1

Input : 1018
Output : 2

Input : -1018
Output : 2

Input : 8462
Output : 4
*/

#include<stdio.h>
#include<stdlib.h>

int Count(int iNo)
{
    int iDigit = 0;
    int iCountEven = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;

        if(iDigit % 2 == 0)
        {
            iCountEven++;
        }
    }    
    return iCountEven;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number: \n");
    scanf("%d", &iValue);

    iRet = Count(iValue);

    printf("%d", iRet);

    return EXIT_SUCCESS;
}