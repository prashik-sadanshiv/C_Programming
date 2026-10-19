// program86.c is the optimized code of this code... 

#include<stdio.h>
#include<stdlib.h>

int SumFactors(int iNo)
{
    int iCnt = 0, iSum = 0;

    for (iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;

}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter a number: \n");
    scanf("%d", &iValue);

    iRet = SumFactors(iValue);
    printf("Summetion of Factors: %d\n", iRet);
    
    return EXIT_SUCCESS;
}

// TIME COMPLEXITY: 0(N/2)


