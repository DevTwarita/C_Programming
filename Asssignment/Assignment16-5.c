/*
5. Accept number of rows and number of columns from user and display below 
pattern. 

Input: iRow = 3, iCol = 4

Output: 1   2   3   4
        5   6   7   8
        9   10  11  12
*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
    int Counter = 1, Counter1 = 0, Counter2 = 0;

    for(Counter1 = 1 ; Counter1 <= iRow; Counter1++)
    {
        for(Counter2 = 1; Counter2 <= iCol; Counter2++)
        {
            printf("%d\t", Counter);
            Counter++;
        }
        printf("\n\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Number of Rows and columns: \n");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}