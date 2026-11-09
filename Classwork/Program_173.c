//if we want to print isum icount on screen

#include<stdio.h>
#include<stdlib.h>

int CountDigits(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iCount++;
        iNo = iNo / 10;
    }
    return iCount;
}

int SumDigits(int iNo)
{
    int iDigit = 0;
    int iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
    }
    return iSum;
}

int main()
{
    int iValue = 0, iCount = 0, iSum = 0;
    float fAvg = 0.0f;
    
    printf("Enter number: \n");
    scanf("%d", &iValue);

    // if any function prints it then we will not be able to get any return value and call it in main function

    iSum = SumDigits(iValue);
    iCount = CountDigits(iValue);

    fAvg = (float)iSum/ (float)iCount; //typecasting //buisness logic

    printf("Number of Digits %d \n", iCount);
    printf("Summation of Digits %d \n", iSum);
    printf("Average of Digits: %.2f", fAvg); //WidthSpecifier(%.2f) it will print only 2 digits after point

    return EXIT_SUCCESS;
}