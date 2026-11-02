#include<stdio.h>
///////////////////////////////////////////////////
//
//   Function Name    :   Table
//   Input            :   Integer (iNo)
//   Output           :   none
//   Description      :   Dollar to INR conversion
//   Date             :   2/11/2026
//   Author           :   Pawan Parmeshwar Salunke
//
///////////////////////////////////////////////////
int DollarTOINR(int iNo)
{
    int iAns = 0;
    iAns = iNo *70;
    return iAns;
}   
/////////////////////////////////////////////////
//  
//  Entry Point of the Application 
//
//////////////////////////////////////////////////
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter  number of USD :");
    scanf("%d", &iValue);

    iRet = DollarTOINR(iValue);
   
    printf("INR Value %d\n", iRet);

    return 0;
}