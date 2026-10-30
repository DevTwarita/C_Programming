#include<stdio.h>
#include<stdlib.h>

int main()
{
    char sName[30];
    int iAge = 0;
    float fMarks = 0.0f;

    printf("Enter Your Name : \n");
    scanf("%[^'\n']s", sName); //here we did not use & operator since it is array

    printf("Enter Your Age : \n");
    scanf("%d", &iAge); //enter remains in input buffer for some people it does not accept integer

    printf("Enter Your Marks : \n");
    scanf("%f", &fMarks);

    printf("Welcome %s \n", sName);
    printf("Your Age is : %d \n", iAge);
    printf("Your Marks are : %f \n", fMarks);

    return EXIT_SUCCESS;
}