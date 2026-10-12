
#include "Header.h"

int main()
{
    int iValue1 = 0, iValue2 = 0, Ans = 0;

    printf("Enter 1st Value: \n");
    if(scanf("%d", &iValue1) != 1)
    {
        fprintf(stderr,"Invalid Input, please Enter Integer Value \n");

        return EXIT_FAILURE;
    }

    printf("Enter 2nd Number: \n");
    if(scanf("%d", &iValue2) != 1)
    {
        fprintf(stderr,"Invalid Input, please Enter Integer Value \n");

        return EXIT_FAILURE;
    }

    Ans = Addition(iValue1, iValue2);
    printf("Addition is: %d\n", Ans);
    
    Ans = Substraction(iValue1, iValue2);
    printf("Addition is: %d\n", Ans);
    
    Ans = Multiplication(iValue1, iValue2);
    printf("Addition is: %d\n", Ans);
    
    Ans = Division(iValue1, iValue2);
    printf("Addition is: %d\n", Ans);
    
    return EXIT_SUCCESS;
}