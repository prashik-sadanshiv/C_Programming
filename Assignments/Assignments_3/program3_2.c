


#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int i = 0;
    if(iNo <= 1)
    {
        printf("Number should be greter than 1");
        iNo = -iNo;
    }

    for(i = 1; i <= iNo; i++)
    {
        if((iNo % i) == 0 && (i % 2 == 0))
        {
            printf("%d ", i);
        }
    }


}

int main()
{
    int iValue = 0;

    printf("Enter the number: \n");
    scanf("%d", &iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}