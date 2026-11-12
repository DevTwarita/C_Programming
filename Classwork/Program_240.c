#include<stdio.h>
#include<stdlib.h>

void Display(char *str) //pointing to Arr //call by address
{
    printf("%s\n", str);
}

int main()
{
    char Arr[] = "Ganesh";

    Display(Arr); //Display(Address)

    return EXIT_SUCCESS;
}