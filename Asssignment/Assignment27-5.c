/*
5. Write a program which accept string from user and display it in
reverse order.

Input :   "Marvellous"
Output :  "suollevraM"
*/

#include<stdio.h>
#include<stdlib.h>

void Reverse(char *str)
{
    int iCnt = 0;

    if (str == NULL)
    {
        return;
    }

    while (str[iCnt] != '\0')
    {
        iCnt++;
    }

    for (iCnt = iCnt - 1; iCnt >= 0; iCnt--)
    {
        printf("%c", str[iCnt]);
    }
}

int main()
{
    char arr[50];

    printf("Enter string: ");
    scanf("%[^'\n']s", arr);

    Reverse(arr);

    return EXIT_SUCCESS;
}