//Accept number from user and check whether its divisible by 3 and 5
/*
    ------------------------------------
                Operation &&
    ------------------------------------           
    Result1     Result2     Final Result
    ------------------------------------
      TRUE       TRUE       TRUE
      TRUE       FALSE      FALSE
      FALSE      TRUE       FALSE     //SHORT CIRCUIT EVALUATION
      FALSE      FALSE      FALSE     //SHORT CIRCUIT EVALUATION
    ------------------------------------
*/

#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
    if(((iNo % 5) == 0) && ((iNo % 3) == 0)) //brackets are important
    {
        printf("The number is divisible by five and three \n");
    }
    else
    {
        printf("The number is not divisible by five and three \n");
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

//short circuit evaluation in case of first condition false THEN 2nd condition is not checked 