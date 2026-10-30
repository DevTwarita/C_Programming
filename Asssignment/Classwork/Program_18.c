/////////////////////////////////////////////////////////////////////////////////////////
//
//  Problem : Take input from the user and CHECK WHETHER that integer is EVEN or ODD 
//
/////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////////////
//  Step 2: Write the algorithm
/*
    START
        Accept number as iValue from user
        Create a if else condition for checking
        if the number is even or odd
        Display the result from as EVEN or ODD
    END 
*/    
/////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : CheckEvenOdd
//  Input         : Integer
//  Output        : Displays EVEN or ODD 
//  Description   : Checks Whether number is EVEN or ODD
//  Date          : 09/10/2026
//  Author        : Twarita Vishnu Dhage
//
/////////////////////////////////////////////////////////////////////////////////////////

void CheckEvenOdd(int iNo)  //why void? because its going to only print not returning anything
{
     if((iNo % 2) == 0)
    {
        printf("The given number is EVEN \n");
    }
    else
    {
        printf("The given number is ODD \n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    CheckEvenOdd(iValue);

    return EXIT_SUCCESS;
}