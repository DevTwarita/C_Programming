/*
3. Accept number of rows and number of columns from user and display 
below pattern.

Input: iRow = 5 iCol = 5

Output: a   b   c   d   e
        1   2   3   4   5
        a   b   c   d   e
        1   2   3   4   5
        a   b   c   d   e
*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
    int Counter1 = 0, Counter2 = 0;
    char Ch = 'a';

    for(Counter1 = 1; Counter1 <= iRow; Counter1++)
    {
        for(Counter2 = 1; Counter2 <= iCol; Counter2++)
            {
                if(Counter1 % 2 != 0)
                {
                    printf("%c\t", Ch + (Counter2-1));
                }
                else
                {
                    printf("%d\t", Counter2);
                }
            }
            printf("\n\n");
    }
}

int main()
{
int iValue1 = 0, iValue2 = 0;

printf("Enter number of rows and columns:  \n");
scanf("%d %d", &iValue1, &iValue2);

Pattern(iValue1, iValue2);

return EXIT_SUCCESS;
}