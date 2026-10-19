// program86.c is the optimized code of this code... 

#include<stdio.h>
#include<stdlib.h>

int Summetion(int iNo)
{
    int iCnt = 0, iSum = 0;
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iSum = iSum + iCnt;
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number: \n");
    scanf("%d", &iValue);

    iRet = Summetion(iValue);

    printf("Summetion is: %d\n",iRet);

    return EXIT_SUCCESS;
}


