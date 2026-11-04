#include<stdio.h>
///////////////////////////////////////////////////
//
//   Function Name    :   FactRev
//   Input            :   Integer (iNo)
//   Output           :   none
//   Description      :   Displays the factors of a given number in reverse order
//   Date             :   4/11/2026
//   Author           :   Pawan Parmeshwar Salunke
//
///////////////////////////////////////////////////
void FactRev(int iNo)
{
  int iCnt = 0;

  if(iNo == 0)
  {
    return;
  }

  for(iCnt = iNo/2; iCnt>=1; iCnt--)
  {
    if(iNo % iCnt ==0)
    {
        printf("%d\n",iCnt);
    }
  }
}
int main()
{
    int iValue = 0;


    printf("Enter number\n");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;
}

