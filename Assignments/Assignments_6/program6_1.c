

#include<stdio.h>
#include<stdlib.h>

void CalculateBill(int iUnit)
{
    int iBill = 0;
    if(iUnit <= 100)
    {   
        iBill = 5 * iUnit;
        printf("your UNIT per charges will be 5 so..\n");
        printf("You need to pay: 5 * %d = %d\n", iUnit, iBill);
    }
    else if(iUnit <= 200)
    {   
        iBill = 7 * iUnit;
        printf("your UNIT per charges will be 7 so..\n");
        printf("You need to pay: 7 * %d = %d\n", iUnit, iBill);
    }
    else if(iUnit > 200)
    {   
        iBill = 10 * iUnit;
        printf("your UNIT per charges will be 10 so..\n");
        printf("You need to pay 10 * %d = %d\n", iUnit, iBill);
    }
    else
    {
        printf("Invalid Input");
    }
}

int main()
{
    int iUnit = 0;

    printf("Enter the UNIT: ");
    scanf("%d", &iUnit);
    
    CalculateBill(iUnit);

    return EXIT_SUCCESS;
}