/*
Input : 4
Output: A   B   C   D
*/
//Ascii value of A 65
//loop counter should always be integer (in this case iCnt) inspite of anything which is to be displayed

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    char ch = '\0';

    ch = 'A'; //loop chya baher lihaych

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%c\n", ch);
        ch++; //this increments character
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the value: \n");
    scanf("%d", &iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}