//Ascii value
//65 for A 90 for Z

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iCnt = 0;

    for (iCnt = 65; iCnt <= 90; iCnt++)
    {
        printf("%c\n", iCnt);
    }

    return EXIT_SUCCESS;
}