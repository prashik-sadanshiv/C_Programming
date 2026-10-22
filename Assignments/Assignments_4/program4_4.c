

#include<stdio.h>
#include<stdlib.h>

void CheckEligibility(int iAge)
{
    if(iAge < 0)
    {
        printf("Invalid Age\n");
    }
    else if(iAge <= 18)
    {
        printf("Not Eligible for Vote \n");
    }
    else
    {
        printf("Eligible for Vote\n");
    }
}

int main()
{
    int iAge = 0;

    printf("Enter Number: ");
    scanf("%d",&iAge);

    CheckEligibility(iAge); 

    return EXIT_SUCCESS;
}