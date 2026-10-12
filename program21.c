

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char sName[30];

    printf("Enter your name: \n");
    scanf("%[^'\n']s", sName);      //  "" Accept the input until user enter enter
                                    //  "%[^'\n']s" Accept the input until user enter Enter 
                                    // ^ means not and \n means Enter keyword 
                                    //  total meaning while entering full name with spce it use to take first name only.

    printf("Welcome %s\n",sName);

    return EXIT_SUCCESS;
}