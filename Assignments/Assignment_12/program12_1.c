#include<stdio.h>
///////////////////////////////////////////////////
//
//   Function Name    :   DisplayDigit
//   Input            :   Integer (iNo)
//   Output           :   none
//   Description      :   Displays digits of a given number
//   Date             :   4/11/2026
//   Author           :   Pawan Parmeshwar Salunke
//
///////////////////////////////////////////////////
void DisplayDigit(int iNo)
{
    int iDigit =0;

    if(iNo<0)
    {
        iNo = -iNo;
    }

    while(iNo>0)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo / 10;
    }
}
int main()
{
    int iValue =0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    DisplayDigit(iValue);

    return 0;
}