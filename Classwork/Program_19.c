/////////////////////////////////////////////////////////////////////////////////////////
//
//  Problem : Take input from the user and CHECK WHETHER that integer is EVEN or ODD 
//
/////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////////////
//  Step 2: Write the algorithm
/*
    START
        create bool
        Create number as iNo for storing iValue
        Create a if else condition for checking
        if the number is even or odd
        Display the result from as EVEN or ODD
    END 
*/    
/////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h> //for including EXIT_SUCCESS
#include<stdbool.h> //for including boolean datatype return value in helper function

/////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : CheckEvenOdd
//  Input         : Integer
//  Output        : Boolean 
//  Description   : Checks Whether number is EVEN or ODD
//  Date          : 09/10/2026
//  Author        : Twarita Vishnu Dhage
//
/////////////////////////////////////////////////////////////////////////////////////////

bool CheckEvenOdd(int iNo)
{
    if((iNo % 2) == 0)
    {
        return true; //for even
    }
    else
    {
        return false;  //default 0 //odd
    }
}

int main()
{
    int iValue = 0;

    bool bRet = false; //default value should be nuetral thats why false i.e 0 in case of boolean 
    //default odd

    printf("Enter number : \n");
    scanf("%d", &iValue);

    bRet = CheckEvenOdd(iValue);

    if(bRet==true)
    {
        printf("The given number is EVEN \n");
    }
    else
    {
        printf("The given number is ODD \n");
    }

    return EXIT_SUCCESS;
}

/*
there is one problem in this program that when we test while giving input other than integer it returns if condition i.e its even
*/