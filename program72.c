// program86.c is the optimized code of this code... 

#include<stdio.h>
#include<stdlib.h>

void CheckPerfect(int iNo)
{
    int iCnt = 0, iSum = 0;

    for (iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    if(iSum == iNo)
    {
        printf("it is a perfect number.\n");
    }
    else
    {
        printf("it is not a perfect number.\n");
    }

}

int main()
{
    int iValue = 0;

    printf("Enter a number: \n");
    scanf("%d", &iValue);

    CheckPerfect(iValue);
    
    return EXIT_SUCCESS;
}

// TIME COMPLEXITY: 0(N/2)


