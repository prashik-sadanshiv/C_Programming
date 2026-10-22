
#include<stdio.h>
#include<stdlib.h>

void DisplayConvert(int ch)
{
    if(ch >= 'A' &&  ch <= 'Z')
    {
    // first way to convert

        // int asc_val = 0;
        // asc_val = (int)ch;
        // ch = asc_val + 32;
        // printf("%c", ch);
    

    // Second way to convert

        // int iCh = (int)ch + 32;
        // printf("%c", iCh);


    // Direct way to convert
        printf("%c", (int)ch+32);
    }
    else
    {
        printf("%c", (int)ch-32);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter Character: \n");
    scanf("%c", &cValue);

    DisplayConvert(cValue);

    return EXIT_SUCCESS;
}