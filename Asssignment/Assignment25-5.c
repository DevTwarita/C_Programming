/*
5. Accept division of student from user and depends on the division 
display exam timing. There are 4 divisions in school as A,B,C,D. Exam 
of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM. 
(Application should be case insensitive) 

Input :  C 
Output :  Your exam at 9.20 AM 

Input :  d 
Output :  Your exam at 10.30 AM
*/

#include<stdlib.h>
#include<stdio.h>

void DisplaySchedule(char chDiv)
{
    switch (chDiv)
    {
        case 'A':
        case 'a':
            printf("Your exam is at 7 AM");
            break;

        case 'B':
        case 'b':
            printf("Your exam is at 8.30 AM");
            break;

        case 'C':
        case 'c':
            printf("Your exam is at 9.20 AM");
            break;

        case 'D':
        case 'd':
            printf("Your exam is at 10.30 AM");
            break;

        default:
            printf("Invalid division");
            break;
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter your division: ");
    scanf(" %c", &cValue);

    DisplaySchedule(cValue);

    return EXIT_SUCCESS;
}