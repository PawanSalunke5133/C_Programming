#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////
//
//   Function Name    :   FindGreater
//   Input            :   Integer (iFirst), Integer (iSecond)
//   Output           :   none
//   Description      :   Determines which of the two integers is greater or if they are equal
//   Date             :   22/10/2026
//   Author           :   Pawan Parmeshwar Salunke
//
///////////////////////////////////////////////////
void FindGreater(int iFirst, int iSecond)
{
    if(iFirst > iSecond)
    {
        printf("%d is Greater\n", iFirst);
    }
    else if(iSecond > iFirst)
    {
        printf("%d is Greater\n", iSecond);
    }
    else
    {
        printf("Both Numbers Are Equal\n");
    }
}

/////////////////////////////////////////////////
//  
//  Entry Point of the Application 
//
//////////////////////////////////////////////////
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &iValue1, &iValue2);
    
    FindGreater(iValue1, iValue2);
    
    return EXIT_SUCCESS;
}