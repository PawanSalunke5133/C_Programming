#include<stdio.h>
///////////////////////////////////////////////////
//
//   Function Name    :   Count
//   Input            :   Integer (iNo)
//   Output           :   none
//   Description      :   Counts occurrences of digits less than 6 in a given number
//   Date             :   4/11/2026
//   Author           :   Pawan Parmeshwar Salunke
//
///////////////////////////////////////////////////
int Count(int iNo)
{
    int iDigit = 1;
    int iCnt = 0;
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit < 6)
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

   iRet = Count(iValue);

    printf("%d",iRet);
    

    return 0;
}