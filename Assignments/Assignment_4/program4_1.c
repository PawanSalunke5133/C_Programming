#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////
//
//   Function Name    :   CheckNumber
//   Input            :   Integer (iValue)
//   Output           :   none
//   Description      :   Checks if number is positive, negative or zero
//   Date             :   22/10/2026
//   Author           :   Pawan Parmeshwar Salunke
//
///////////////////////////////////////////////////
void CheckNumber(int iValue)
{
    
    if(iValue > 0)
    {
        printf("Number is Positive\n");
    }
    else if(iValue < 0)
    {
        printf("Number is Negative\n");
    }
    else
    {
        printf("Number is Zero\n");
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
    
    CheckNumber(iValue);
    
    return EXIT_SUCCESS;
}