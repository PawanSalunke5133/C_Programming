#include<stdio.h>
///////////////////////////////////////////////////
//
//   Function Name    :   RangeDisplayRev
//   Input            :   Integer (iStart, iEnd)
//   Output           :   none
//   Description      :   Displays numbers in a given range in reverse order
//   Date             :   4/11/2026
//   Author           :   Pawan Parmeshwar Salunke
//
///////////////////////////////////////////////////

void RangeDisplayRev(int iStart, int iEnd)
{
    int iCnt =0;

    if(iStart<=0 || iEnd<=0 || iStart>iEnd)
    {
        printf("Invalid Range");
        return;
    }

    for(iCnt=iEnd; iCnt>=iStart; iCnt--)
    {
        printf("%d ", iCnt);
    }
}

int main()
{
    int iValue1 =0, iValue2=0, iRet=0;

    printf("Enter Starting Point\n");
    scanf("%d",&iValue1);

    printf("Enter Ending  Point\n");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1, iValue2);

    return 0;
}