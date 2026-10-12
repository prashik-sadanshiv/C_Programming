


#include<stdio.h>
#include<stdlib.h>


int main() 
{
    int iValue1 = 0, iValue2 = 0, iResult = 0;

    printf("Enter first Number: ");
    scanf("%d", &iValue1);

    printf("Enter second Number: ");
    scanf("%d", &iValue2);

    if (iValue1 > iValue2)
    {
        printf("larger Number is: %d\n", iValue1);
    }
    else
    {
        printf("larger Number is: %d\n", iValue2);
    }

    return EXIT_SUCCESS;
}