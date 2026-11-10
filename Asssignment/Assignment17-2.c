/*
2. Accept number of rows and number of columns from user and display 
below pattern. 

Input: iRow = 4  iCol = 5

Output: 2   4   6   8   10
        1   3   5   7   9
        2   4   6   8   10
        1   3   5   7   9
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
                if(Counter1 % 2 != 0)
                {          
                    printf("%d\t", 2 * Counter2); //printing even numbers
                }
                else
                {
                    printf("%d\t", (2*Counter2) - 1); // printing odd numbers
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