#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    bool bFlag = false; //flag down boolean flag
    
    for(iCnt = 2, bFlag = true; iCnt <= (iNo/2); iCnt++) //changed here
    {
        if ((iNo % iCnt) == 0)
        {
            bFlag = false; //not early stopping
        }
    }

    return bFlag;
}

int main(void) //main function input ghenar nahiye
{
    int iValue = 0;
    bool bRet = false; //default value of boolean 

    printf("ENter number: \n");
    scanf("%d", &iValue);

    bRet = CheckPrime(iValue); //bret value stored from other function

    if(bRet) //considerd as true
    {
        printf("It is a prime number");
    }
    else
    {
        printf("It is not a prime number");
    }

    return EXIT_SUCCESS;
}