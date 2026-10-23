#include<stdio.h>
#include<stdlib.h>

int main()
{
    char sName[30];

    printf("Enter Your Name : \n");
    scanf("%[^'\n']s", sName); //accept string dont stop(^) regex operator -(regular expression) taking input until user enters ENTERs(\n)

    printf("Welcome %s \n", sName);

    return EXIT_SUCCESS;
}