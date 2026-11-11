/*
    iRow = 4
    iCol = 4

    #   2   3   4
    1   #   3   4
    1   2   #   4
    1   2   3   #
*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow,int iCol)
{
    int i = 0, j = 0;
    
    if(iRow != iCol) //filter
    {
        printf("Invalid Input");
        return;
    }

    for(i = 1; i <= iRow; i++) //nested loop
    {
        for (j = 1; j <= iCol; j++)
        {   
            if(i == j) //for diagonal
            {         
                printf("#\t");
            }
            else
            {
                printf("%d\t", j);
            }
        }        
        printf("\n\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Number of Rows: \n");
    scanf("%d", &iValue1);

    printf("Enter Number of Columns: \n");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);    

    return EXIT_SUCCESS;
}