#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char Arr[100];

    printf("Enter String : \n");
    scanf("%s",Arr); //pahili white space milali ki %s pudhcha accept nai karat

    printf("Entered string is: %s\n", Arr);

    return EXIT_SUCCESS;
}