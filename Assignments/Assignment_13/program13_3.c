#include<stdio.h>
///////////////////////////////////////////////////
//
//   Function Name    :   CountRange
//   Input            :   Integer (iNo)
//   Output           :   none
//   Description      :   Counts digits in a given number within a specific range
//   Date             :   4/11/2026
//   Author           :   Pawan Parmeshwar Salunke
//
///////////////////////////////////////////////////
int CountRange(int iNo)
{
   int iCnt =0;
   int iDigit = 0;

   while(iNo!=0)
   {
        iDigit = iNo %10;
        iNo = iNo / 10;

        if(iDigit > 3 && iDigit < 7)
        {
            iCnt++;
        }
   }
   return iCnt;
}    
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);
    
    iRet = CountRange(iValue);

    printf("%d", iRet);

    return 0;

}