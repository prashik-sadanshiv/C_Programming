

// logic will work but it is not best approach

#include<stdio.h>
#include<stdlib.h>

void Maximum(int iNo1, int iNo2)
{
    if (iNo1 > iNo2)
    {
        printf("%d is large value: ", iNo1);
    }
    else
    {
        printf("%d is large value: ", iNo1);

    }
}



int main()
{
    
    int iValue1 = 0, iValue2 = 0;

    printf("Enter 1st Number: ");
    scanf("%d", &iValue1);

    printf("Enter 2nd Number: ");
    scanf("%d", &iValue2);

    Maximum(iValue1, iValue2);

    printf("Maximum number is: %d\n", iResult);

    return EXIT_SUCCESS;
}