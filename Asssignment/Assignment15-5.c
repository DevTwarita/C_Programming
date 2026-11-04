/*
5. Write a program which accept total marks & obtained marks from user and
calculate percentage.

Input : 1000 745
Output : 74.5%
*/

#include<stdio.h>
#include<stdlib.h>

float Percentage(int iNo1, int iNo2)
{
    float fPer = 0.0f;

    if (iNo1 <= 0)
    {
        printf("Invalid Input Total marks cannot be zero or negative.\n"); //breaking the convention here that we cant print anything inside a function
        exit(0);
    }
    
    fPer = ((float)iNo2 / (float)iNo1) * 100;
    
    return fPer;
}
int main()
{
    int iValue1 = 0,iValue2 = 0;
    float fRet = 0.0;

    printf("Please enter total marks: \n");
    scanf("%d", &iValue1);
    
    printf("Please enter obtained marks: \n");
    scanf("%d", &iValue2);
    
    fRet = Percentage(iValue1, iValue2);
    
    printf("Percentage is: %.2f %%", fRet);
    
    return EXIT_SUCCESS;
}