/*
3.Write a program which accept number from user and prints its numbers line.

Input : 4
Output :-4  -3  -2  -1  0   1   2   3   4 
*/

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = -iNo; iCnt <= iNo; iCnt++)
    {
        printf("%d", iCnt);
        printf("\t");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}