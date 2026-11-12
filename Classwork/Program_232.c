#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char Arr[20] = "Ganesh Pune"; //space is non printable character but it is counted
    printf("%s\n", Arr);

    printf("Size of array is: %d \n", sizeof(Arr));

    printf("length of string is : %d \n",strlen(Arr)); //'\0' is not counted in length 

    return EXIT_SUCCESS;
}