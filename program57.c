
#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt = 0;
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\n", iCnt);

    }
}

int main()
{
    int iValue1 = 0;

    printf("Enter a number: \n");
    scanf("%d", &iValue1);

    Display(iValue1);

    return EXIT_SUCCESS;
}






// // program86.c is the optimized code of this code... 

// #include<stdio.h>
// #include<stdlib.h>

// void Summetion(int iNo)
// {
//     int iCnt = 0, iSum = 0;
//     for (iCnt = 1; iCnt <= iNo; iCnt++)
//     {
//         iSum = iSum + iCnt;
//     }
//     printf("%d\n", iSum);
// }

// int main()
// {
//     int iValue1 = 0;

//     printf("Enter a number: \n");
//     scanf("%d", &iValue1);

//     Summetion(iValue1);

//     return EXIT_SUCCESS;
// }


