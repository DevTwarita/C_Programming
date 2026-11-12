#include<stdio.h>
#include<stdlib.h>

int main()
{
    char Arr[20] = "Ganesh Pune"; //space is non printable character but it is counted
    printf("%s\n", Arr);

    printf("Size of array is: %d \n", sizeof(Arr));

    return EXIT_SUCCESS;
}