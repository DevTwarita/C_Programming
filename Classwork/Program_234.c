#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char Arr[100];

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr); //special scanf
    //accept string dont stop(^) regex operator -(regular expression) taking input until user enters ENTERs(\n)

    printf("Entered string is: %s\n", Arr);

    return EXIT_SUCCESS;
}