#include<stdio.h>
#include<stdlib.h>

void Display(int ptr[]) //accepting it into array it seems but it is a pointer
//array is treated as an pointer and pointer is treated as an array hence proved
{
    printf("%d\n", *ptr);

    ptr++;
    printf("%d\n", *ptr);
    
    ptr++;
    printf("%d\n", *ptr);
    
    ptr++;
    printf("%d\n", *ptr);

    ptr++;
    printf("%d\n", *ptr);
}

int main()
{
    int Arr[5] = {11,21,51,101,111};

    Display(Arr); //Display(100); 100 is imaginary address

    return EXIT_SUCCESS;
}