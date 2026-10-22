

#include<stdio.h>
#include<stdlib.h>

void CheckGreatest(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
    {
        printf("Both numbers are Equal");
    }
    else if(iNo1 < iNo2)
    {
        printf("%d is the greatest number\n",iNo1);
    }
    else
    {
        printf("%d is the greatest number\n",iNo1);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Number: ");
    scanf("%d", &iValue1);

    printf("Enter Number: ");
    scanf("%d", &iValue1);

    CheckGreatest(iValue1, iValue2);

    return EXIT_SUCCESS;
}