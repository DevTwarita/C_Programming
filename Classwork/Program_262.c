#include<stdio.h>
#include<stdlib.h>

void CountFrequencyX(char *str)
{
    int iCountSmall = 0, iCountCapital = 0, iCountDigits = 0;

    while (*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCountSmall++;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            iCountCapital++;
        }
        else if(*str >= '0' && *str <= '9')
        {
            iCountDigits++;
        }
        str++;
    }

    printf("Number of small letters is : %d\n",iCountSmall);
    printf("Number of capital letters is : %d\n", iCountCapital);
    printf("Number of digit letters is : %d\n", iCountDigits);
}

int main()
{
    char Arr[100] = {'\0'}; //cleaned array

    printf("Enter string: \n");
    scanf("%[^'\n']s",Arr);

    CountFrequencyX(Arr);
    
    return EXIT_SUCCESS;
}