#include<stdio.h>
///////////////////////////////////////////////////
//
//   Function Name    :   MultDigits
//   Input            :   Integer (iNo)
//   Output           :   none
//   Description      :   Multiplies digits of a given number
//   Date             :   4/11/2026
//   Author           :   Pawan Parmeshwar Salunke
//
///////////////////////////////////////////////////
int MultDigits(int iNo)
{
    int iMult = 1;
    int iDigit = 0;

    while(iNo!=0)
    {
        iDigit = iNo %10;
        iNo = iNo / 10;

        if(iDigit != 0)
        {
            iMult= iMult * iDigit;
        }
    }
    return iMult;
}    
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);
    
    iRet = MultDigits(iValue);

    printf("%d", iRet);

    return 0;

}