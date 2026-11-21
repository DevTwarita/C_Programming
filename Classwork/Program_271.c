#include<stdio.h>
#include<stdlib.h>

/*
error due to redefinition of function

Program_271.c:13:7: error: conflicting types for 'Addition'
 float Addition(float No1, float No2)
       ^~~~~~~~
Program_271.c:4:8: note: previous definition of 'Addition' was here
 double Addition(double No1, double No2)
        ^~~~~~~~
Program_271.c:22:5: error: conflicting types for 'Addition'
 int Addition(int No1, int No2)
     ^~~~~~~~
Program_271.c:4:8: note: previous definition of 'Addition' was here
 double Addition(double No1, double No2)
        ^~~~~~~~
*/

double Addition(double No1, double No2)
{
    double Ans;

    Ans = No1 + No2;

    return Ans;
}

float Addition(float No1, float No2)
{
    float Ans;

    Ans = No1 + No2;

    return Ans;
}

int Addition(int No1, int No2)
{
    int Ans;

    Ans = No1 + No2;

    return Ans;
}

int main()
{
    return EXIT_SUCCESS;
}