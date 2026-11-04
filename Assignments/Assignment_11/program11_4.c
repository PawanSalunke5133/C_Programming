#include<stdio.h>
///////////////////////////////////////////////////
//
//   Function Name    :   RangeSumEven
//   Input            :   Integer (iStart, iEnd)
//   Output           :   Integer (iSum)
//   Description      :   Calculates sum of even numbers in a given range
//   Date             :   4/11/2026
//   Author           :   Pawan Parmeshwar Salunke
//
///////////////////////////////////////////////////

int RangeSumEven(int iStart, int iEnd)
{
    int iCnt =0, iSum =0;

    if(iStart<=0 || iEnd<=0 || iStart>iEnd)
    {
        printf("Invalid Range");
        return 0;
    }

    for(iCnt=iStart; iCnt<=iEnd; iCnt++)
    {
        if(iCnt % 2 ==0)
        {
          iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue1 =0, iValue2=0, iRet=0;

    printf("Enter Starting Point\n");
    scanf("%d",&iValue1);

    printf("Enter Ending  Point\n");
    scanf("%d",&iValue2);

   iRet =RangeSumEven(iValue1, iValue2);

   if(iRet > 0)
   { 
      printf("Addition is :%d\n", iRet);
   }
    return 0;
}