

#include<stdio.h>
#include<stdlib.h>

void DisplayGrade(int fmarks)
{
    if(fmarks >= 90 && fmarks <= 100)
    {
        printf("A Grade");
    }
    else if(fmarks >= 75 && fmarks <= 89)
    {
        printf("B Grade");
    }
    else if(fmarks >= 60 && fmarks <= 74)
    {
        printf("C Grade");
    }
    else if(fmarks >= 40 && fmarks <= 59)
    {
        printf("D Grade");
    }
    else if(fmarks >= 0 && fmarks <= 39)
    {
        printf("Fail");
    }
    else
    {
        printf("Please Enter the Valid marks");
    }
}

int main()
{
    float fmarks = 0.0f;

    printf("Enter marks : ");
    scanf("%f", &fmarks);

    DisplayGrade(fmarks);

    return EXIT_SUCCESS;
}