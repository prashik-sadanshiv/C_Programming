/////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////

// #define EXIT_SUCCESS 0
#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Addition
//  Input           :   Integer 
//  Output          :   Integer
//  Description     :   Performs Addition
//  Date            :   04/10/2026
//  Author          :   Prashik Anil Sadanshiv
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////



int Addition(
                int iNo1,       // First Input  (This is way of giving input of K & R "Denis Richi and Brain karnigal")
                int iNo2        // Second Input
            )
{
    int iAns = 0;
    iAns = iNo1 + iNo2;         // Reusable Business logic
    return iAns;
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point of the application
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()      // Entry point function from where the code start
{
    int iValue1 = 0, iValue2 = 0, iResult = 0;

    printf("Enter the frist Number: \n");
    if(scanf("%d",&iValue1) != 1)
    {
        fprintf(stderr,"Unable to proceed as Input is invalid\n");
        
        return EXIT_FAILURE;        // EXIT_FAILURE means -1
    }


    printf("Enter the second Number: \n");
    if(scanf("%d",&iValue2) != 1)
    {
        fprintf(stderr,"Unable to proceed as Input is invalid\n");
        
        return EXIT_FAILURE;        // EXIT_FAILURE means -1
    }

    iResult = Addition(iValue1, iValue2);
    // iResult = iValue1 + iValue2;      //  without reusable Business logic
    
    printf("Addition is: %d\n", iResult);

    // return 0 means EXIT_SUCCESS;
    return EXIT_SUCCESS;
}