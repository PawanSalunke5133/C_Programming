#include<stdio.h>
///////////////////////////////////////////////////
//
//   Function Name    :   CountFour
//   Input            :   Integer (iNo)
//   Output           :   none
//   Description      :   Counts occurrences of the digit 4 in a given number
//   Date             :   4/11/2026
//   Author           :   Pawan Parmeshwar Salunke
//
///////////////////////////////////////////////////
int CountFour(int iNo)
{
    int iDigit = 1;
    int iCnt = 0;
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 4)
        {
           iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}
int main()
{
    int iValue =0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

   iRet = CountFour(iValue);

    printf("%d",iRet);
    

    return 0;
}