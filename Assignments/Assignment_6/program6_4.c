#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////
//
//   Function Name    :   CheckTriangle
//   Input            :   Integer (iSide1), Integer (iSide2), Integer (iSide3)
//   Output           :   none
//   Description      :   Checks triangle validity
//   Date             :   22/10/2026
//   Author           :   Pawan Parmeshwar Salunke
//
///////////////////////////////////////////////////
void CheckTriangle(int iSide1, int iSide2, int iSide3)
{
    if(iSide1 <= 0 || iSide2 <= 0 || iSide3 <= 0)
    {
        printf("Invalid Triangle\n");
    }
    else if((iSide1 + iSide2 > iSide3) && 
            (iSide1 + iSide3 > iSide2) && 
            (iSide2 + iSide3 > iSide1))
    {
        printf("Valid Triangle\n");
    }
    else
    {
        printf("Invalid Triangle\n");
    }
}

/////////////////////////////////////////////////
//  
//  Entry Point of the Application 
//
//////////////////////////////////////////////////
int main()
{
    int iSide1 = 0, iSide2 = 0, iSide3 = 0;
    
    printf("Enter three sides: ");
    scanf("%d %d %d", &iSide1, &iSide2, &iSide3);
    
    CheckTriangle(iSide1, iSide2, iSide3);
    
    return EXIT_SUCCESS;
}