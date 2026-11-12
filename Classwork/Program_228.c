#include<stdio.h>
#include<stdlib.h>

int main()
{
    char Arr[100] = {'G','a','n','e','s','h'}; //7 letter string including \0 size of array 10 
    //'\0' is compulsory ethically not syntactically but if we dont write \0 it may display garbage value

    printf("%s\n", Arr);

    printf("Size of array is: %d \n", sizeof(Arr));

    return EXIT_SUCCESS;
}