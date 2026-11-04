/*
2.Write a program which accept number from user and display its factors in
decreasing order.

Input : 12
Output : 6 4 3 2 1

Input : 13
Output : 1

Input : 10
Output : 5 2 1
*/

#include<stdio.h>
#include<stdlib.h>

void FactRev(int iNo)
{
    int iFact = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for(iFact = (iNo/2); iFact >= 1; iFact--)
    {
        if((iNo % iFact) == 0) //factors
        {
           printf("%d\t",iFact);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    FactRev(iValue);

    return EXIT_SUCCESS;
}