//Accept number from user and check whether its divisible by 3

#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
    if((iNo % 3) == 0)
    {
        printf("The number is divisible by three \n");
    }
    else
    {
        printf("The number is not divisible by three \n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number:  \n");
    scanf("%d", &iValue);

    CheckDivisible(iValue);

    return EXIT_SUCCESS;
}