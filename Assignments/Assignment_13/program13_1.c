#include<stdio.h>
///////////////////////////////////////////////////
//
//   Function Name    :   CountEven
//   Input            :   Integer (iNo)
//   Output           :   none
//   Description      :   Counts even digits in a given number
//   Date             :   4/11/2026
//   Author           :   Pawan Parmeshwar Salunke
//
///////////////////////////////////////////////////
int CountEven(int iNo)
{
    int iCnt =0;
    int iDigit = 0;

    if(iNo<0)
    {
        iNo = -iNo;
    }
    while (iNo!=0)
    {
            iDigit = iNo %10;
            iNo = iNo / 10;
        if(iDigit %2 == 0)
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
    
    iRet = CountEven(iValue);

    printf("%d", iRet);

    return 0;

}