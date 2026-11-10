//Ascii table

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iCnt = 0;

    for (iCnt = 65; iCnt <= 90; iCnt++)
    {
        printf("%d\t%o\t%x\t%c\n", iCnt, iCnt, iCnt, iCnt); //d for decimal o for octal x for hexadecimal
    }

    return EXIT_SUCCESS;
}