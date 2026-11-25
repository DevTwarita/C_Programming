#include<stdio.h>
#include<stdlib.h>

int main()
{
    int No = 14;
    int Ans = 0;

    Ans = No << 3; //left shift number increases

    //No << X here X is the number you shift by
    //-> No * 2 raise to X
    //-> No * 2 ^ 3
    //-> NO * 8
    //-> 14 * 8
    //-> 112

    printf("%d\n", Ans);

    return EXIT_SUCCESS;
}