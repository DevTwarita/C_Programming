// vowels = A   E   I   O   U or a  e   i   o   u

#include<stdio.h>
#include<stdlib.h>

int CountVowelsX(char *str)
{
    int iCount = 0;

    while (*str != '\0')
    {
        if((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u')||
           (*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U'))
        {
            iCount++;
        }
        str++;
    }

    return iCount;
}

int main()
{
    char Arr[100] = {'\0'}; //cleaned array
    int iRet = 0;

    printf("Enter string: \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountVowelsX(Arr);

    printf("Frequency of vowels is : %d\n", iRet);
    
    return EXIT_SUCCESS;
}