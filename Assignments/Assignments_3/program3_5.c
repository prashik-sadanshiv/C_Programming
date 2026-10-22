

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

# define TRUE 1
# define FALSE 0

bool ChkVowel(char ch)
{
    char vowels[] = {'a','e','i','o','u'};

    for(int i = 0; i <= sizeof(vowels); i++)
    {
        if(ch == vowels[i])
        {
            return TRUE;
        }
    }
    return FALSE;
}

int main()
{
    char cValue = '\0';
    bool bRet = FALSE;

    printf("Enter Character: \n");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);
    if(bRet == TRUE)
    {
        printf("it is VOWELS");
    }
    else
    {
        printf("it is not VOWELS");
    }
    return 0;
}