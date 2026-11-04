#include<stdio.h>
///////////////////////////////////////////////////
//
//   Function Name    :   CountTwo
//   Input            :   Integer (iNo)
//   Output           :   none
//   Description      :   Counts occurrences of the digit 2 in a given number
//   Date             :   4/11/2026
//   Author           :   Pawan Parmeshwar Salunke
//
///////////////////////////////////////////////////
int CountTwo(int iNo)
{
    int iDigit = 1;
    int iCnt = 0;
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 2)
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

   iRet = CountTwo(iValue);

    printf("%d",iRet);

    return 0;
}