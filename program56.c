// program86.c is the optimized code of this code... 

#include<stdio.h>
#include<stdlib.h>



int main()
{
    int iValue1 = 0;
    int iCnt = 0;

    printf("Enter a number: \n");
    scanf("%d", &iValue1);

    for (iCnt = 1; iCnt <= iValue1; iCnt++)
    {
    
        printf("%d\n", iCnt);
    }

    return EXIT_SUCCESS;
}


