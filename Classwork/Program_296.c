#include<stdio.h>
#include<stdlib.h>

int main()
{
    int No = 14;
    int Ans = 0;

    Ans = No >> 3; //right shift number decreases

    /*
    No / 2 raise to X
    -> No / 2 ^ 3
    -> 14 / 8
    -> 1._    
    */

    printf("%d\n", Ans);

    return EXIT_SUCCESS;
}