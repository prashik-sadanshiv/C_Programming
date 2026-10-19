
    // Input : 5
    // Output : 120 (Factorial)

    #include<stdio.h>
    #include<stdlib.h>

    int Summetion(int iNo)
    {
        int iCnt = 0;
        int iSum = 1;
        
        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            iSum = iSum * iCnt;
        }
        return iSum;
    }

    int main()
    {
        int iValue = 0, iResult = 0;

        printf("Enter the frequency: \n");
        scanf("%d", &iValue);

        iResult = Summetion(iValue);

        printf("Summetion is: %d\n", iResult);

        return EXIT_SUCCESS;
    }

