#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////
//
//   Function Name    :   CheckEvenOdd
//   Input            :   Integer (iValue)
//   Output           :   none
//   Description      :   Checks whether the entered number is even or odd
//   Date             :   22/10/2026
//   Author           :   Pawan Parmeshwar Salunke
//
///////////////////////////////////////////////////
void CheckEvenOdd(int iValue)
{
    // Write your logic here
    if(iValue % 2 == 0)
    {
        printf("Even Number\n");
    }
    else
    {
        printf("Odd Number\n");
    }
}
/////////////////////////////////////////////////
//  
//  Entry Point of the Application 
//
//////////////////////////////////////////////////
int main()
{
    int iValue = 0;
    
    printf("Enter a number: ");
    scanf("%d", &iValue);
    
    CheckEvenOdd(iValue);
    
    return EXIT_SUCCESS;
}