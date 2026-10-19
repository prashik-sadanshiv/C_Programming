// program86.c is the optimized code of this code... 

#include<stdio.h>
#include<stdlib.h>

long long int Factorial(int iNo)
{
    int iCnt = 0;

    long long int iFact = 0;
                                                        // for(iCnt = 1,  iFact = 1; iCnt <= iNo, iCnt++)
    for (iCnt = 1, iFact = 1; iCnt <= iNo; iCnt++)      // the is also way to initial the local variable in for loop
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    long long int iRet = 0;

    printf("Enter a number: \n");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Factorial is: %lld\n",iRet);

    return EXIT_SUCCESS;
}


