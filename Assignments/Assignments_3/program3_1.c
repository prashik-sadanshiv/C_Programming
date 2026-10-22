

#include<stdio.h>
#include<stdlib.h>

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        printf("Number should be Greater Than Zero\n");
        return;
    }

    int iCnt = 1;
    int iTmp = 0;
    for(int iTmp = 1; iCnt <= iNo; iTmp++)
    {
        printf(" %d ",2 * iTmp);
        iCnt++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number: \n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return EXIT_SUCCESS;
}