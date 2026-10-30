//3. Write a program which accept number from user and print even factors of that number.
//Input : 36
//Output: 2 6 12 18

#include<stdio.h>

void DisplayEvenFactor(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    printf("Even Factors of %d are:\n",iNo);

    for(i = 2; i<=(iNo/2); i=i+2)
    {
        if((iNo % i) == 0 && (i%2 == 0)) //factors
        {
           printf("%d\n",i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    DisplayEvenFactor(iValue);

    return 0;
}