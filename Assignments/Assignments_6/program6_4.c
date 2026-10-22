

#include<stdio.h>
#include<stdlib.h>

void CheckTriangle(int iNo1, int iNo2, int iNo3)
{
    if((iNo1 == iNo2) && (iNo2 == iNo3))
    {
        printf("Invalid input's");
    }
    else if((iNo1 > iNo2) && (iNo1 > iNo3))
    {
        int iNo1Square = iNo1 * iNo1;
        int iNo2Square = iNo2 * iNo2;
        int iNo3Square = iNo3 * iNo3;
        if (iNo1Square == (iNo2Square + iNo3Square))
        {
            printf("it is the Triangle...");
        }
        else
        {
            printf("it is Not the Triangle...");
        }
    }
    else if(iNo2 > iNo3)
    {
        int iNo1Square = iNo1 * iNo1;
        int iNo2Square = iNo2 * iNo2;
        int iNo3Square = iNo3 * iNo3;
        if (iNo2Square == (iNo1Square + iNo3Square))
        {
            printf("it is the Triangle...");
        }
        else
        {
            printf("it is Not the Triangle...");
        }
    }
    else 
    {
        int iNo1Square = iNo1 * iNo1;
        int iNo2Square = iNo2 * iNo2;
        int iNo3Square = iNo3 * iNo3;
        if (iNo3Square == (iNo1Square + iNo2Square))
        {
            printf("it is the Triangle...");
        }
        else
        {
            printf("it is Not the Triangle...");
        }
    }
    
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;

    printf("Enter Value: ");
    scanf("%d", &iValue1);

    printf("Enter Value: ");
    scanf("%d", &iValue2);

    printf("Enter Value: ");
    scanf("%d", &iValue3);

    CheckTriangle(iValue1, iValue2, iValue3);

    return EXIT_SUCCESS;
}