#include<stdio.h>
#include<stdlib.h>

int main()
{
    int ret = 0;
    int no = 0;

    printf("Enter number : \n");
    ret = scanf("%d", &no);     //return value of scanf is integer which is stored in int ret

    printf("Return value is : %d \n", ret);

    return EXIT_SUCCESS;
}