#include<stdio.h>
///////////////////////////////////////////////////
//
//   Function Name    :   SquareMeter
//   Input            :   Integer (iNo)
//   Output           :   none
//   Description      :   Converts Square Feet to Square Meters (handles negatives)
//   Date             :   2/11/2026
//   Author           :   Pawan Parmeshwar Salunke
//
///////////////////////////////////////////////////
double SquareMeter(int iValue)
{
    double dAns = 0.0;

    if(iValue<0)
    {
        iValue = -iValue;
    }

    dAns = iValue * 0.092903;

    return dAns;
}
////////////////////////////////////////////////
//  
//  Entry Point of the Application 
//
//////////////////////////////////////////////////
int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter Distance in Square feet:\n");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("Square Meters: %f\n", dRet);
    return 0;
}
