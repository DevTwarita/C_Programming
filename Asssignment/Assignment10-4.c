/*
4. Write a program which accept temperature in Fahrenheit and convert it into
celsius. (1 celsius = (Fahrenheit -32) * (5/9))

Input : 10
Output : -12.2222 (10 - 32) * (5/9)

Input : 34
Output : 1.11111 (34 - 32) * (5/9)
*/

double FhtoCs(float fTemp)
{
    double Celcius = 0.0;

    Celcius = (fTemp-32)*(5.0/9.0);

    return Celcius;    
}

#include<stdio.h>
#include<stdlib.h>

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit: \n");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);
    printf("Conversion to Celcius is : %f", dRet);

    return EXIT_SUCCESS;
}