#include<stdio.h>
#include<stdlib.h>

void Display(int ptr[])
{
   printf("%d\n", ptr[0]);
   printf("%d\n", ptr[1]);
   printf("%d\n", ptr[2]);
   printf("%d\n", ptr[3]); //segmentation fault or garbage value
   printf("%d\n", ptr[4]); //segmentation fault or garbage value
}

int main()
{
    int Arr[3] = {11,21,51};

    Display(Arr); //Display(100); 100 is imaginary address

    return EXIT_SUCCESS;
}