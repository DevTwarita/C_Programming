/*
1.Write a program which accept number from user and print that number of $ & *
on screen.

Input : 5
Output : $  *   $   *   $   *   $   *   $   *

Input : 3
Output : $   *  $   *   $   *

Input : -3
Output : $   *  $   *   $   *
*/

#include<stdio.h>
#include<stdlib.h>

void pattern (int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$\t*\t");
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    pattern (iValue);

    return EXIT_SUCCESS;
}