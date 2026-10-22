#include<stdio.h>
///////////////////////////////////////////////////
//
//   Function Name    :   Accept
//   Input            :   Integer
//   Output           :   none
//   Description      :   Print stars (*) on screen based on given number
//   Date             :   22/10/2026
//   Author           :   Pawan Parmeshwar Salunke
//
///////////////////////////////////////////////////
void Accept(int iNo)
{
    int iCnt = 0;
    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        printf("*");
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
    iValue = 5;

    Accept(iValue);
    return 0;
}