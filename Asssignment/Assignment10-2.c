/*
2. Write a program which accept width & height of rectangle from user and calculate
its area. (Area = Width * Height)

Input : 5.3 9.78
Output : 51.834
*/

#include<stdio.h>
#include<stdlib.h>

double RectArea(float fWidth, float fHeight)
{
    double RectArea = 0.0;

    if(fWidth != fHeight)
    {
    RectArea = fWidth * fHeight;
    }
    else
    {
        return ;
    }
    
    return RectArea;
}

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter Width: \n");
    scanf("%f", &fValue1);

    printf("Enter Height: \n");
    scanf("%f", &fValue2);

    dRet = RectArea(fValue1,fValue2);
    printf("Area of Rectangle is %f", dRet);

    return EXIT_SUCCESS;
}