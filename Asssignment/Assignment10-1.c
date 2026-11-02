/*
1.Write a program which accept radius of circle from user and calculate its area.
Consider value of PI as 3.14. (Area = PI * Radius * Radius)

Input : 5.3
Output : 88.2026

Input : 10.4
Output : 339.6224
*/


double CircleArea(float fRadius)
{
    float PI = 3.14f;
    double CircleArea = 0.0f;

    CircleArea = PI * fRadius * fRadius;

    return CircleArea;
}

#include<stdio.h>
#include<stdlib.h>

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter radius : \n");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);
    printf("Area of circle is :%lf", dRet);

    return EXIT_SUCCESS;
}