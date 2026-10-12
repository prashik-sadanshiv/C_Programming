// This is helper file
// If we want to #include "Header.h" but it is not neccessary 
#include "Header.h"

/////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Addition
//  Input           :   Integer 
//  Output          :   Integer
//  Description     :   Performs Addition
//  Date            :   04/10/2026
//  Author          :   Prashik Anil Sadanshiv
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////



int Addition(
                int iNo1,       // First Input  (This is way of giving input of K & R "Denis Richi and Brain karnigal")
                int iNo2        // Second Input
            )
{
    int iAns = 0;
    iAns = iNo1 + iNo2;         // Reusable Business logic
    return iAns;
}


