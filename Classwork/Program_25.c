#include<stdio.h>
#include<stdlib.h>

int main()
{
    char sName[30];

    printf("Enter Your Name : \n");
    scanf("%s", sName); //%s is used to accept string , accepts till first space same as previous java program when used next

    printf("Welcome %s \n", sName);

    return EXIT_SUCCESS;
}