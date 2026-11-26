#include<stdio.h>
#include<stdlib.h>

int main()
{
    int Arr[4] = {0}; //local array hence we initialize it with default value so no garbage value is stored
    int iCnt = 0;

    printf("Enter the elements of array: \n");

    scanf("%d", &(Arr[0]));
    scanf("%d", &(Arr[1]));
    scanf("%d", &(Arr[2]));
    scanf("%d", &(Arr[3]));
    //why & is required?
    //because if we write Arr[0] we get address
    //but if we write &Arr[0] it is stored on the first elemet address and so on 
    
    printf("Elements of Array are: \n");

    for(iCnt = 0; iCnt < 4; iCnt++)
    {
        printf("%d\n", Arr[iCnt]);
    }

    //getter and setter
    //here for loop for printing is setter
    //and if we put scanf in loop it will be getter

    return EXIT_SUCCESS;
}