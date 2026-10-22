

#include<stdio.h>
#include<stdlib.h>

void CheckCharacterType(char cValue)
{
    int iValue = cValue;
    int iA = 'A';
    int iZ = 'Z';

    int ia = 'a';
    int iz = 'b';

    // printf(iValue);

    if(iValue >= iA && iValue <= iZ)
    {
        printf("Uppercase alphabets..");
    }
    else if(iValue >= ia &&  iValue <= iz)
    {
        printf("Lowercase alphabets..");
    }
    else
    {
        printf("Invalid Input.");
    }
}

int main()
{   
    char cValue = '\0';

    printf("Enter the Character: ");
    scanf("%c", &cValue);

    CheckCharacterType(cValue);

    return EXIT_SUCCESS;
}