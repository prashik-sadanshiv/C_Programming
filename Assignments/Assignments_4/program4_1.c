

#include<stdio.h>
#include<stdlib.h>

void CheckNumber(int iNo)
{
    if(iNo == 0)
    {
        printf("Zero");
        return;
    }
    else if(iNo < 0)
    {
        printf("Negative Number: ");
        return;
    }
    else
    {
        printf("Positive number: ");
        return;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d",&iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}