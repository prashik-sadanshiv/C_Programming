
#include<stdio.h>
#include<stdlib.h>


int main()
{
    int ret = 0;
    int no = 0;

    printf("Enter number: \n");
    ret = scanf("%d\n", &no);

    printf("Return value is: %d\n",ret);

    return EXIT_SUCCESS;    // this EXIT_SUCCESS is nothing but return 1.
}