// # This is main file
#include "Header.h"

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