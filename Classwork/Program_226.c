#include<stdio.h>
#include<stdlib.h>

int main()
{
    char Arr[10] = {'G','a','n','e','s','h','\0'}; //7 letter string including \0 size of array 10

    printf("%s\n", Arr);

    printf("Size of array is: %d \n", sizeof(Arr));

    return EXIT_SUCCESS;
}