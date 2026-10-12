

#include<stdio.h>
#include<stdlib.h>

void CheckEven(int iNo)
{


}

int main()
{
    int iValue = 0;

    printf("Enter the Number: ");
    
    scanf("%d", &iValue); 
    // if(scanf("%d",&iValue1) != 1)

    // if(scanf("%d",&iValue) != 0);
    // {
    //     fprintf(stderr,"Invalid input, input should be Integer");

    //     return EXIT_FAILURE;
    // }
    if ((iValue % 2)== 0)
    {
        printf("It is Even Number\n"); 
    }
    else
    {
        printf("It is Odd Number\n"); 
    }

    return EXIT_SUCCESS;    // 
}