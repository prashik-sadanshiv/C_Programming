/*

STEP 1 : Understand the problem statement
STEP 2 : Write the algorithem
STEP 3 : Decide the programming language
STEP 4 : Write the program.
STEP 5 : Test the program.

*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                    
//  STEP 1 : Understand the problem statement
//           User is going to enter any 2 integers
//           And we have to perform addition
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////




/////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  STEP 2 : Write the algorithem 
/*
    START
        Accept first Number as No1
        Accept second Number as No2
        Create the variable as Ans to store the result
        Perfor the addtion of No1 and No2 and store into Ans
        Displat the result from Ans
    END
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////




/////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  STEP 3: Decide the programming language
//           We select C programming
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////



/////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// STEP 4: Write the program
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>   // Header file where all files are stores

int Addition(int iNo1, int iNo2)
{
    int iAns = 0;
    iAns = iNo1 + iNo2;         // Reusable Business logic
    return iAns;
}


int main()      // Entry point function from where the code start
{
    int iValue1 = 0, iValue2 = 0, iResult = 0;

    printf("Enter the frist Number: \n");
    scanf("%d",&iValue1);

    printf("Enter the second Number: \n");
    scanf("%d",&iValue2);

    iResult = Addition(iValue1, iValue2);
    // iResult = iValue1 + iValue2;      //  without reusable Business logic
    
    printf("Addition is: %d\n", iResult);

    return 0;
}