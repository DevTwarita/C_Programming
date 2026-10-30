#include<stdio.h>
#include<stdlib.h>

//program to find average of two entered numbers by user

float Average(int iNo1, int iNo2)
{
    float fResult = 0.0f;

    fResult = (iNo1 + iNo2) / 2; //Buisness logic

    return fResult;
}

//issue in this program is that we get answer in float but entered input are integers
//hence we will not recieve output as expected

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fResult = 0.0f;

    printf("Enter First Number \n");
    scanf("%d", &iValue1);

    printf("Enter Second Number \n");
    scanf("%d", &iValue2);

    fResult = Average(iValue1, iValue2);
    printf("Average is %f \n", fResult);

    return EXIT_SUCCESS;
}