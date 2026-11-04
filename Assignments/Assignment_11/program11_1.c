#include<stdio.h>
///////////////////////////////////////////////////
//
//   Function Name    :   RangeDisplay
//   Input            :   Integer (iStart, iEnd)
//   Output           :   none
//   Description      :   Displays numbers in a given range
//   Date             :   4/11/2026
//   Author           :   Pawan Parmeshwar Salunke
//
///////////////////////////////////////////////////

void RangeDisplay(int iStart, int iEnd)
{
    int iCnt =0;

    if(iStart>iEnd)
    {
        printf("Invalid Range");
    }
    for(iCnt=iStart; iCnt<=iEnd; iCnt++)
    {
        printf("%d\t",iCnt);
    }
}

int main()
{
    int iValue1 =0, iValue2=0;

    printf("Enter Starting Point\n");
    scanf("%d",&iValue1);

    printf("Enter Ending  Point\n");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1, iValue2);

    return 0;
}