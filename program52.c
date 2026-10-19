// #input: check wheather it is divisible by 3 or not

#include<stdio.h>
#include<stdlib.h>


void checkDivisible(int iNo)
{
    if ((iNo % 5) == 0)
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
    int iValue = 0;

    printf("Enter a number: \n");
    scanf("%d", &iValue);

    checkDivisible(iValue);

    return EXIT_SUCCESS;
}


