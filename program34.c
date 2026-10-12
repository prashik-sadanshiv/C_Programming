// # accept two nubmer return divide

#include<stdio.h>
#include<stdlib.h>

int Minimum(int iNo1, int iNo2, int iNo3)
{
    if((iNo1 < iNo2) && (iNo1 < iNo3))
    {
        return iNo1;
    }
    else if((iNo2 < iNo3) && (iNo2 < iNo1))
    // else if(iNo2 > iNo3)     // this logic will also work if got to know that iNo1 is smaller than any of iNo2 or iNo3
    {
        return iNo2;
    }
    else
    {
        return iNo3;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    int iResult = 0;

    printf("Enter 1st Number: \n");
    scanf("%d", &iValue1);

    printf("Enter 2nd Number: \n");
    scanf("%d", &iValue2);

    printf("Enter 3rd Number: \n");
    scanf("%d", &iValue3);


    iResult = Minimum(iValue1, iValue2, iValue3);
    printf("Mininum number is: %d\n", iResult);

    return EXIT_SUCCESS;
}