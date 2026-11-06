#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = 2; iCnt <= (iNo/2); iCnt++) //changed here
    {
        if ((iNo % iCnt) == 0)
        {
            return false; //removed isum ,not a good practice to write return
        }
    }

    return true; //not a good practice
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