#include<stdio.h>
///////////////////////////////////////////////////
//
//   Function Name    :   MultFact
//   Input            :   Integer (iNo)
//   Output           :   none
//   Description      :   Calculates the product of all factors of a given number
//   Date             :   4/11/2026
//   Author           :   Pawan Parmeshwar Salunke
//
///////////////////////////////////////////////////
int MultFact(int iNo)
{
  int iCnt = 0;
  int iMult = 1;

  if(iNo == 0)
  {
    return 0;
  }

  for(iCnt =1; iCnt<= iNo/ 2; iCnt++)
  {
    if(iNo % iCnt ==0)
    {
        iMult = iMult * iCnt;
    }
  }
  return iMult;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("%d\n",iRet);

    return 0;
}

