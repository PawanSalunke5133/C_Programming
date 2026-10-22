#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////
//
//   Function Name    :   CheckMultipleDivisibility
//   Input            :   Integer (iValue)
//   Output           :   none
//   Description      :   Checks divisibility by 3 and 5
//   Date             :   22/10/2026
//   Author           :   Pawan Parmeshwar Salunke
//
///////////////////////////////////////////////////
void CheckMultipleDivisibility(int iValue)
{
    if((iValue % 3 == 0) && (iValue % 5 == 0))
    {
        printf("Divisible by Both\n");
    }
    else if(iValue % 3 == 0)
    {
        printf("Divisible by 3 Only\n");
    }
    else if(iValue % 5 == 0)
    {
        printf("Divisible by 5 Only\n");
    }
    else
    {
        printf("Not Divisible by Either\n");
    }
}

/////////////////////////////////////////////////
//  
//  Entry Point of the Application 
//
//////////////////////////////////////////////////
int main(void)
{
    int iValue = 0;
    
    printf("Enter number: ");
    scanf("%d", &iValue);
    
    CheckMultipleDivisibility(iValue);
    
    return EXIT_SUCCESS;
}