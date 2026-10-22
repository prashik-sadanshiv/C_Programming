

#include<stdio.h>
#include<stdlib.h>

void CalculateBonus(float fSalary, int iYears)
{
    float fBonus = 0.0f;
    if((iYears > 10) && fSalary > 0)
    {
        fBonus = (fSalary * 15)/100;
        printf("Input: %f %d -> Bonus = %f", fSalary, iYears, fBonus);
    }
    else if((iYears < 10 && iYears > 5) && fSalary > 0)
    {
        fBonus = (fSalary * 10)/100;
        printf("Input: %f %d -> Bonus = %f", fSalary, iYears, fBonus);
    }
    else if((iYears > 5) && fSalary > 0)
    {
        fBonus = (fSalary * 5)/100;
        printf("Input: %f %d -> Bonus = %f", fSalary, iYears, fBonus);
    }
}

int main()
{
    float fSalary = 0.0f;
    int iYears = 0;

    printf("Enter your salary: ");
    scanf("%f", &fSalary);

    printf("Enter working years: ");
    scanf("%d", &iYears);

    CalculateBonus(fSalary, iYears);

    return EXIT_SUCCESS;
}