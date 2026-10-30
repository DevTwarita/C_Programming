#include "Header.h" //if preprocessor wants to search in current directory it is included in double quote

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