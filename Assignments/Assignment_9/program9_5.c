#include<stdio.h>
///////////////////////////////////////////////////
//
//   Function Name    :   Table
//   Input            :   Integer (iNo)
//   Output           :   none
//   Description      :   Calculates difference between factorial of even and odd numbers (handles negatives)
//   Date             :   2/11/2026
//   Author           :   Pawan Parmeshwar Salunke
//
///////////////////////////////////////////////////
int oddFactorial(int iNo)
{
    int iCnt = 0;
    int iEFact = 1;
    int iOFact = 1;

    if(iNo<0)
    {
        iNo = -iNo;
    }
    
    for(iCnt=iNo; iCnt>=1; iCnt--)
    {
        if(iCnt %2== 0)
        {
            iEFact = iEFact * iCnt;
        }
        else
        {
            iOFact = iOFact * iCnt;
        }
    }  
    return iEFact - iOFact;
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