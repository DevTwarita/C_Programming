//Accept number from user and check whether its divisible by EITHER 3 OR 5
/*
    ------------------------------------
                Operation ||
    ------------------------------------           
    Result1     Result2     Final Result
    ------------------------------------
      TRUE       TRUE       TRUE    //short circuit evaluation
      TRUE       FALSE      TRUE    //short circuit evaluation
      FALSE      TRUE       TRUE
      FALSE      FALSE      FALSE
    ------------------------------------
*/
//Short circuit evaluation occurs because first condition gets checked but second does not get checked


#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
    if(((iNo % 5) == 0) || ((iNo % 3) == 0)) // || - Logical OR // | - bitwise OR
    {
        printf("The number is divisible by five OR three \n");
    }
    else
    {
        printf("The number is not divisible by five OR three \n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number:  \n");
    scanf("%d", &iValue);

    CheckDivisible(iValue); //call by value

    return EXIT_SUCCESS;
}