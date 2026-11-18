/*
5. Accept number from user and display below pattern. 

Input :  8
Output : 2  4   8   10  12  14  16
*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int counter = 0;

    for(counter = 1;counter <= iNo * 2; counter++)
    {
        if(counter % 2 == 0)
        {
            printf("%d\t", counter);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements: \n");
    scanf("%d", &iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}