/*
3. Accept number from user and display below pattern. 

Input :  5
Output :    1   *   2   *   3   *   4   *   5   * 
*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int counter = 0;

    for(counter = 1;counter <= iNo; counter++)
    {
        printf("%d\t*\t", counter);
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