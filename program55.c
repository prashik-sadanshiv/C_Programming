// program86.c is the optimized code of this code... 

#include<stdio.h>
#include<stdlib.h>

void checkDivisible(int iNo)
{
    if((iNo % 5) == 0)
    {
        if((iNo % 3) == 0)
        {
            printf("it is divisible \n");
        }
        else
        {
            printf("it is Not divisible by \n");
        }
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


