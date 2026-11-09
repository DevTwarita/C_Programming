//pattern printing
//$$$$$$
#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t", iCnt);
    }

    printf("\n");
}

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iValue = 0;

    printf("Enter the Frequency: ");
    scanf("%d", &iValue);

    Pattern(iValue);
   
    return EXIT_SUCCESS;
}