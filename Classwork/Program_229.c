#include<stdio.h>
#include<stdlib.h>

int main()
{
    char Arr[100] = {'G','a','n','e','s','h','\0','P','u','n','e'};
    //nothing will print after '\0' but pune will get stored in memory 

    printf("%s\n", Arr);

    printf("Size of array is: %d \n", sizeof(Arr));

    return EXIT_SUCCESS;
}