

#include<stdio.h>
#include<stdlib.h>

void CheckDiscount(int iAmount)
{
    float DiscountedValue = 0.0f;
    float PayableAmount = 0.0f;

    if(iAmount <= 1000)
    {
        printf("There is No discount this amount\n");
    }
    else if(iAmount > 1000 && iAmount <= 5000)
    {
        DiscountedValue = (iAmount * 10)/100;
        PayableAmount = iAmount - DiscountedValue;
        printf("You Got discount %f : Payable Amount is: %f",DiscountedValue, PayableAmount);
    }
    else if(iAmount > 5000)
    {
        DiscountedValue = (iAmount * 20)/100;
        PayableAmount = iAmount - DiscountedValue;
        printf("You Got discount %f : Payable Amount is: %f",DiscountedValue, PayableAmount);
    }
    else
    {
        printf("Invalid Input...");
    }
}


int main()
{
    float iAmount = 0.0f;

    printf("Enter the Amount: ");
    scanf("%f",&iAmount);

    CheckDiscount(iAmount);

    return EXIT_SUCCESS;
}