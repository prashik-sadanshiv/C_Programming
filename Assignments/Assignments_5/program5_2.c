

#include<stdio.h>
#include<stdlib.h>

void CheckYear(int iYear)
{
    if((iYear % 400 == 0) || (iYear % 4 == 0 && iYear % 100 != 0))
    {
        printf("%d is the Leap year...",iYear);
    }
    else
    {
        printf("%d is not the Leap year...",iYear);
    }
}

int main()
{
    int iYear = 0;

    printf("Enter the Year: ");
    scanf("%d",&iYear);

    CheckYear(iYear);

    return EXIT_SUCCESS;
}