// #input: check wheather it is divisible by 3 or not
/*
        ----------------------------------------------------------
                            Operation &&
        ----------------------------------------------------------
        Result1             Result2                 Final Result
        ----------------------------------------------------------
         TRUE                TRUE                       TRUE            (Short Circuit evaluation TRUE) checked 
         TRUE                FALSE                      TRUE            (Short Circuit evaluation TRUE)
         FALSE               TRUE                       TRUE            (Short Circuit evaluation FALSE)
         FALSE               FALSE                      FALSE           (Short Circuit evaluation FALSE) check both condition
        ----------------------------------------------------------

*/
#include<stdio.h>
#include<stdlib.h>


void checkDivisible(int iNo)
{
    if(((iNo % 3) == 0) || ((iNo % 5) == 0))            
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


