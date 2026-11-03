#include<stdio.h>
#include<stdlib.h>

void DisplayFactors(int iNo)
{
    int iCnt = 0;

    printf("Factors of %d are : \n", iNo);

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\n", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number:  \n");
    scanf("%d", &iValue);
    
    DisplayFactors(iValue);

    return EXIT_SUCCESS;
}

//Time Complexity : O(N)  [here O is big-O, N is number of loops] in this case
//O (Order): Describes the general trend or rate at which performance changes.
//(N): Represents the size of the input data (e.g., the number of elements in a list,
// characters in a string, or records in a database).