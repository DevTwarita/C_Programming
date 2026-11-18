/*
3. Accept number of rows and number of columns from user and display 
below pattern.

Input: iRow = 3 iCol = 5

Output: 5   4   3   2   1
        5   4   3   2   1
        5   4   3   2   1
*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
    int Counter1 = 0, Counter2 = 0;

    for(Counter1 = 1; Counter1 <= iRow; Counter1++)
    {
        for(Counter2 = 1; Counter2 <= iCol; Counter2++)
        {
            printf("%d\t", iCol - Counter2 + 1);
        }
        printf("\n\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns: \n");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}