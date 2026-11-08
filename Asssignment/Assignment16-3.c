/*
3. Accept number of rows and number of columns from user and display below 
pattern. 

Input : iRow = 3 , iCol = 5

Output : A  A   A   A   A
         B  B   B   B   B
         C  C   C   C   C
*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
    int Counter1 = 0, Counter2 = 0;
    char ch = '\0';

    for(Counter1 = 1, ch = 'A'; Counter1 <= iRow; Counter1++, ch++)
    {
        for(Counter2 = 1; Counter2 <= iCol; Counter2++)
        {
            printf("%c\t", ch);
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