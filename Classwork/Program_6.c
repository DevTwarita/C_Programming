/*
    Step 1: understand the problem statement
    Step 2: Write the algorithm
    Step 3: Decide the programming language
    Step 4: Write the program
    Step 5: Test the program
*/

/////////////////////////////////////////////////////////////////////////////////////////
//
//  Step 1 : understand the problem statement
//           user is going to enter any two integers 
//           and we have to perform addition
//
/////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////////////
//  Step 2: Write the algorithm
/*
    START
        Accept first number as No1
        Accept second number as No2
        create the variable to store as Ans
        perform the addition and store into Ans
        Display the result from Ans
    END 
*/    
/////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////////////
//     
//  Step 3: Decide the programming language
//          we select C programming
//
/////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////////////
//
//   Step 4: Write the program
//
/////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Addition(int iNo1, int iNo2)
{
    int iAns = 0;

    iAns = iNo1 + iNo2;     //buisness logic

    return iAns;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iResult = 0;  // i so that its a integer  

    printf("Enter First number : \n");
    scanf("%d", &iValue1);

    printf("Enter Second number : \n");
    scanf("%d", &iValue2);
    
    iResult = Addition(iValue1 , iValue2);

    printf("Addition is : %d\n", iResult);
    
    return 0;
}