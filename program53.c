// #input: check wheather it is divisible by 3 or not
/*
        ----------------------------------------------------------
                            Operation &&
        ----------------------------------------------------------
        Result1             Result2                 Final Result
        ----------------------------------------------------------
         TRUE                TRUE                       TRUE
         TRUE                FALSE                      FALSE
         FALSE               TRUE                       FALSE      (Short Circuit evaluation due to first condition
         FALSE               FALSE                      FALSE      is false so decondition will not going to check)
        ----------------------------------------------------------

*/
#include<stdio.h>
#include<stdlib.h>


void checkDivisible(int iNo)
{
    if(((iNo % 3) == 0) && ((iNo % 5) == 0))            // Short circuit evaluation (means while using && operator)
    {
        printf("it is divisible \n");
    }
    else
    {
        printf("it is Not divisible \n");
    }
}


int main()
{
    int iValue1 = 0;

    printf("Enter a number: \n");
    scanf("%d", &iValue1);


    checkDivisible(iValue1);

    return EXIT_SUCCESS;
}


