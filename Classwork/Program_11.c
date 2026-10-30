#include<stdio.h>
#include<stdlib.h>

int main()
{
    int no = 0;

    printf("Enter number : \n");
    if(scanf("%d", &no) != 1) 
    /*
    here != 1 means if i put any other thing than integer then 
    it considers that conversion was 0 zero and since 
    0 != 1 the condition here is true and it will print input is invalid
    */
     {
        printf("INVALID INPUT \n");

        return EXIT_FAILURE; //-1
    }

    printf("Input is valid \n");

    return EXIT_SUCCESS; //0
}