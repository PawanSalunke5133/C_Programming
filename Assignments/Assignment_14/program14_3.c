#include<stdio.h>
///////////////////////////////////////////////////
//
//   Function Name    :   NonFact
//   Input            :   Integer (iNo)
//   Output           :   none
//   Description      :   Displays the non-factors of a given number
//   Date             :   4/11/2026
//   Author           :   Pawan Parmeshwar Salunke
//
///////////////////////////////////////////////////
void NonFact(int iNo)
{
  int iCnt = 0;

  for(iCnt = 1; iCnt<=iNo; iCnt++)
  {
    if(iNo % iCnt!=0)
    {
        printf("%d\n",iCnt);
    }
  }
  printf("\n");
}
int main()
{
    int iValue = 0;


    printf("Enter number\n");
    scanf("%d",&iValue);

    NonFact(iValue);

    return 0;
}

