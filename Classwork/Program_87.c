#include<stdio.h>
#include<stdlib.h>

//Nested If

void CheckDivisible(int iNo)
{
    if((iNo % 5) == 0)
    {
        if(((iNo % 3) == 0))
        {
        printf("The number is divisible by five and three \n");
        }
        else
        {
        printf("The number is not divisible by five and three \n");
        }
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

    CheckDivisible(iValue);

    return EXIT_SUCCESS;
}