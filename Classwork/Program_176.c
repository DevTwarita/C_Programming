//accept number from user and check whether number is palindrom or not
//palindrom is the number or a word which read any ways forward or backward its same
//eg 8998

//bug is a logical issue

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPalindrom(int iNo)
{
    int iRev = 0, iDigit = 0;
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo/10;
    }

    //at the end of the loop iNo becomes 0 hence it will never display the number is palindrome
    //and hence to tackle this we need to create backup of iNo

    if (iNo == iRev) //issue
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;
    
    printf("Enter number: \n");
    scanf("%d", &iValue);

    bRet = CheckPalindrom(iValue);

    if (bRet == true)
    {
        printf("Number is a palindrome");
    }
    else
    {
        printf("Number is not a palindrome");
    }

    return EXIT_SUCCESS;
}