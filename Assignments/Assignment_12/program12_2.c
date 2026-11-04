#include<stdio.h>

#define TRUE 1
#define FALSE 0 
///////////////////////////////////////////////////
//
//   Function Name    :   ChkZero
//   Input            :   Integer (iNo)
//   Output           :   none
//   Description      :   Checks if a number contains zero
//   Date             :   4/11/2026
//   Author           :   Pawan Parmeshwar Salunke
//
///////////////////////////////////////////////////
typedef int BOOL;
BOOL ChkZero(int iNo)
{
    int iDigit = 1;
    while(  iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            return TRUE;
        }
        iNo = iNo / 10;
    }
    return FALSE;
}
int main()
{
    int iValue =0;
    BOOL bRet = FALSE;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("It Contains Zero\n");
    }
    else
    {
        printf("There is no Zero\n");
    }

    return 0;
}