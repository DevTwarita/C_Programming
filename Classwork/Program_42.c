#include<stdio.h>
#include<stdlib.h>

int Maximum(int iNo1, int iNo2) //changed to int returning intger
{
    if(iNo1>iNo2)
    {
        return iNo1;
    }
    else
    {
        return iNo2;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iResult = 0;

    printf("Enter First Number \n");
    scanf("%d", &iValue1);

    printf("Enter Second Number \n");
    scanf("%d", &iValue2);

    iResult = Maximum(iValue1, iValue2);
    printf("Maximum is %d \n", iResult);

    return EXIT_SUCCESS;
}