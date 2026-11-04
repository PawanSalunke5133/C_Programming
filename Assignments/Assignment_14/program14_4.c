#include<stdio.h>
///////////////////////////////////////////////////
//
//   Function Name    :   SumNonFact
//   Input            :   Integer (iNo)
//   Output           :   none
//   Description      :   Counts the sum of non-factors of a given number
//   Date             :   4/11/2026
//   Author           :   Pawan Parmeshwar Salunke
//
///////////////////////////////////////////////////
int SumNonFact(int iNo)
{
  int iCnt = 0;
  int iSum =0;

  for(iCnt = 1; iCnt<=iNo; iCnt++)
  {
    if(iNo % iCnt!=0)
    {
        iSum = iSum + iCnt;
    }
  }
  return iSum;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet =SumNonFact(iValue);
    printf("%d\n",iRet);

    return 0;
}

