#include<stdio.h>
///////////////////////////////////////////////////
//
//  Function Name   :   Divide
//  Input           :   Integer, Integer 
//  Output          :   Integer
//  Description     :   perform Division of two numbers
//  Date            :   22/10/2026
//  Author          :   Pawan Parmeshwar Salunke
//
///////////////////////////////////////////////////

int Divide(int iNo1, int iNo2)
{
    int iAns = 0;
    if(iNo2 == 0)
    {
        return -1;
    }
    iAns = iNo1 / iNo2;
    return iAns;
}
///////////////////////////////////////////////////
//  
//  Entry Point of the Application 
//
///////////////////////////////////////////////////

int main()
{
    int iValue1 = 15, iValue2 = 5;
    int iRet = 0;

    iRet = Divided (iValue1 , iValue2);

    printf("Division is %d" ,iRet);

    return 0;
}