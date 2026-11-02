#include<stdio.h>
///////////////////////////////////////////////////
//
//   Function Name    :   Factorial
//   Input            :   Integer (iNo)
//   Output           :   Integer (factorial of iNo)
//   Description      :   Calculates factorial of a number (handles negatives)
//   Date             :   2/11/2026
//   Author           :   Pawan Parmeshwar Salunke
//
///////////////////////////////////////////////////
int Factorial(int iNo)
{
    int iCnt = 0, iFact = 1;
     if(iNo<=0)
        {
            iNo = -iNo;
        }

    for(iCnt = 1; iCnt <=iNo; iCnt++) 
    {
        iFact = iFact * iCnt;
    }  
        printf("\n");
    
    return iFact;
}
/////////////////////////////////////////////////
//  
//  Entry Point of the Application 
//
//////////////////////////////////////////////////
int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter  number: ");
    scanf("%d", &iValue);

   iRet = Factorial(iValue);

   printf("factorial of number is : %d\n", iRet);
    return 0;
}