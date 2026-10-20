/*
5 — Identify Character Type
Problem Statement: Accept a single character and determine whether it is an uppercase alphabet, lowercase
alphabet, digit, or special character. Use character comparisons without using library character-classification
functions.
Expected Output:
• Input: A → Uppercase Alphabet
• Input: m → Lowercase Alphabet
• Input: 7 → Digit
• Input: @ → Special Character
*/

#include <stdio.h>
#include <stdlib.h>

void CheckCharacterType(char cValue)
{
    if(cValue >= 'a' && cValue <= 'z')
    {
        printf("Lowercase Alphabate");
    }
    else if(cValue >= 'A' && cValue <= 'Z')
    {
        printf("Uppercase Alphabate");
    }
    
    else if (cValue <= '9' && cValue >= '0')
    {
        printf("Digit");
    }
    else
    {
        printf("Special Character");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter a character: ");
    scanf(" %c", &cValue);

    CheckCharacterType(cValue);

    return EXIT_SUCCESS;
}