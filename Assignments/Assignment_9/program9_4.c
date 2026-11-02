#include<stdio.h>
///////////////////////////////////////////////////
//
//   Function Name    :   Table
//   Input            :   Integer (iNo)
//   Output           :   none
//   Description      :   Calculates factorial of odd numbers (handles negatives)
//   Date             :   2/11/2026
//   Author           :   Pawan Parmeshwar Salunke
//
///////////////////////////////////////////////////
int oddFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    if(iNo<0)
    {
        iNo = -iNo;
    }
    
    for(iCnt=iNo; iCnt>=1; iCnt--)
    {
        if(iCnt %2!= 0)
        {
            iFact = iFact * iCnt;
        }
    }
    return iFact;
}
/////////////////////////////////////////////////
//  
//  Entry Point of the Application 
//
//////////////////////////////////////////////////
int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    iRet = oddFactorial(iValue);

    printf("Odd Factorial of number is %d",iRet);

    return 0;
}