

#include<stdio.h>
#include<stdlib.h>

void CheckAdmission(float fmarks, int iAge)
{
    if((fmarks >= 60) && (iAge >= 17))
    {
        printf("Eligible for Admission\n");
    }
    else
    {
        printf("Not Eligible for Admission\n");
    }
}

int main()
{
    float fMarks = 0.0f;
    int iAge = 0;

    printf("Enter the marks: ");
    scanf("%f",&fMarks);

    printf("Enter your Age: ");
    scanf("%d",&iAge);

    CheckAdmission(fMarks, iAge);

    return EXIT_SUCCESS;
}