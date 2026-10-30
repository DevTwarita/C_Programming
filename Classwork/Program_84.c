//Accept number from user and check whether its divisible by 5

#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
    if((iNo % 5) == 0)
    {
        printf("The number is divisible by five \n");
    }
    else
    {
        printf("The number is not divisible by five \n");
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