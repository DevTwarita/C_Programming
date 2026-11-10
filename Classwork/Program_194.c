//Ascii value
//97 for a 122 for z

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iCnt = 0;

    for (iCnt = 97; iCnt <= 122; iCnt++)
    {
        printf("%c\n", iCnt);
    }

    return EXIT_SUCCESS;
}