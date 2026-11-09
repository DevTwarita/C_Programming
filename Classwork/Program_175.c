//accept number from user and return its reverse number

#include<stdio.h>
#include<stdlib.h>

int Reverse(int iNo) //ithe updater chi garaj nahi karan negative cha positive output nahi pahije
{
    int iRev = 0, iDigit = 0;
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo/10;
    }

    return iRev;
}

int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter number: \n");
    scanf("%d", &iValue);

    iRet = Reverse(iValue);

    printf("Reverse number is : %d \n", iRet);

    return EXIT_SUCCESS;
}