#include<stdio.h>

int main()
{
    int no = 21;

    printf("%d\n",no);              //print the value of integer variable
    printf("%d\n", sizeof(no));     // size of integer variable no will be 4 bytes
    printf("%d\n", &no);            //will save the address of integer variable 

    return 0;
}