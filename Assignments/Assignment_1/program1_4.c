#include<stdio.h>
///////////////////////////////////////////////////
//
//  Function Name   :   check
//  Input           :   Integer 
//  Output          :   Boolean
//  Description     :   check if a number is divisible by 5
//  Date            :   22/10/2026
//  Author          :   Pawan Parmeshwar Salunke
//
///////////////////////////////////////////////////
typedef int BOOL;
#define TRUE 1
#define False 0

int Check (int iNo)
{
    if((iNo % 5)== 0)
    {
        return TRUE;
    }
    else
    {
        return False;
    }
}
///////////////////////////////////////////////////
//  
//  Entry Point of the Application 
//
///////////////////////////////////////////////////
int main()
{
    int iValue = 0;
    BOOL bRet = TRUE;

    printf("Enter number : \n");
    scanf("%d", & iValue);

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }
    return 0;
}