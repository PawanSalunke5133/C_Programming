#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

///////////////////////////////////////////////////
//
//   Function Name    :   ChkEven
//   Input            :   Integer (iNo)
//   Output           :   BOOL (TRUE or FALSE)
//   Description      :   Checks whether a number is even or not
//   Date             :   22/10/2026
//   Author           :   Pawan Parmeshwar Salunke
//
///////////////////////////////////////////////////
BOOL ChkEven(int iNo)
{

    if(iNo % 2 == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

//////////////////////////////////////////////////
//  
//  Entry Point of the Application 
//
///////////////////////////////////////////////////
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number: ");
    scanf("%d", &iValue);

    bRet = ChkEven(iValue);

    
    if(bRet == TRUE)
    {
        printf("It is Even Number\n");
    }
    else
    {
        printf("It is not Even Number\n");
    }

    return 0;
}