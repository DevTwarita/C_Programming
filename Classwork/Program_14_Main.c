#include "Header.h"

/////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point of the application
//
/////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0, iResult = 0;  // i so that its a integer  

    printf("Enter First number : \n");
    if(scanf("%d", &iValue1) != 1)
    {
        fprintf(stderr, "Unable To Proceed as Input Is Invalid");

        return EXIT_FAILURE;
    }

    printf("Enter Second number : \n");
    if(scanf("%d", &iValue2) != 1)
    {
        fprintf(stderr, "Unable To Proceed as Input Is Invalid \n");

        return EXIT_FAILURE;
    }    

    iResult = Addition(iValue1 , iValue2);

    printf("Addition is : %d\n", iResult);
    
    return EXIT_SUCCESS;
}