#include<stdio.h>
#include<stdlib.h>

int main()
{
    int no = 0;

    printf("Enter number : \n");
    if(scanf("%d", &no) != 1)
    {
        fprintf(stderr,"INVALID INPUT \n"); //here stderr is displayed on console only but by stderr not stdout

        return EXIT_FAILURE; //-1
    }

    printf("Input is valid \n");

    return EXIT_SUCCESS; //0
}