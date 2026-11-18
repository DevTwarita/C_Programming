/*
1. Accept number from user and display below pattern. 

Input :  5
Output : A  B   C   D   E
*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int counter = 0;
    char Ch = 'A';

    for(counter = 1;counter <= iNo; counter++)
    {
        printf("%c\t", Ch);
        Ch++;       
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