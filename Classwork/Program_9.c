#include<stdio.h>
#include<stdlib.h>  //stdlib.h library madhe EXIT_SUCCESS ahe which is a better replacement for zero

/////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : Addition
//  Input         : Integer, Integer
//  Output        : Integer 
//  Description   : Performs Addition
//  Date          : 04/10/2026
//  Author        : Twarita Vishnu Dhage
//
/////////////////////////////////////////////////////////////////////////////////////////

int Addition(
                int iNo1,       //First input  //for indentation this is written like this is coding conventions
                int iNo2        //Second input
            )
{
    int iAns = 0;

    iAns = iNo1 + iNo2;     //buisness logic

    return iAns;
}

/////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point of the application
//
/////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0, iResult = 0;  // i so that its a integer  

    printf("Enter First number : \n");
    scanf("%d", &iValue1);

    printf("Enter Second number : \n");
    scanf("%d", &iValue2);
    
    iResult = Addition(iValue1 , iValue2);

    printf("Addition is : %d\n", iResult);
    
    return EXIT_SUCCESS;
}

/////////////////////////////////////////////////////////////////////////////////////////
//      Step 5: Test the program
//
//      Tested test cases
//-------------------------------------------------
//      Input1      Input2      Output
//-------------------------------------------------
//      10          11          21
//      11          0           11
//      0           11          11
//      20          -9          11
//      -9          20          11
//      -20         -11         -31
//--------------------------------------------------
//
/////////////////////////////////////////////////////////////////////////////////////////