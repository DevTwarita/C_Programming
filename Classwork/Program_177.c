//accept number from user and check whether number is palindrom or not
//palindrom is the number or a word which read any ways forward or backward its same
//eg 8998

//solving bug

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPalindrom(int iNo)
{
    int iRev = 0, iDigit = 0;

    int iTemp = 0; //create temporary integer

    iTemp = iNo;//to store iNo creating a backup here
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo/10;
    }

    if (iRev == iTemp)  //issue solved
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