#include<stdio.h>
///////////////////////////////////////////////////
//
//   Function Name    :   CountDiff
//   Input            :   Integer (iNo)
//   Output           :   none
//   Description      :   Counts the difference between the sum of even digits and the sum of odd digits in a given number
//   Date             :   4/11/2026
//   Author           :   Pawan Parmeshwar Salunke
//
///////////////////////////////////////////////////
int CountDiff(int iNo)
{
    int iDigit = 0;
    int iEvenSum = 0;
    int iOddSum = 0;
    while(iNo!=0)
    {
        iDigit = iNo %10;

        if(iDigit != 0)
        {
            if(iDigit %2 ==0)
            {
                iEvenSum = iEvenSum + iDigit;
            }
            else
            {
                iOddSum = iOddSum + iDigit;
            }
        }
         iNo = iNo / 10;
    }
    return iEvenSum - iOddSum;
}    
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);
    
    iRet = CountDiff(iValue);

    printf("%d", iRet);

    return 0;
}