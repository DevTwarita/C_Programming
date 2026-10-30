//Input : 4
//Output : 4321

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\t", iCnt); // new line
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the frequency : \n");
    scanf("%d", &iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}