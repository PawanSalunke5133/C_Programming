#include<stdio.h>
#include<stdlib.h>

float AverageDigits (int iNo)
{
    int iDigit = 0;
    int iCount =0;
    int iSum = 0;
    float fValue = 0.0f;

    while( iNo ! = 0)
    {
        iDigit = iNo % 10;
        isum = isum + iDigit;
        iCount++;

        fValue = iSum + iCount;
        iNo = iNo /10;
    }
    return fValue;
    
}

int main()
{
    int iValue =0;
    float fRet =0.0f;

    printf("Eneter number : \n");
    scanf("%d", &iValue);

    fRet = AverageDigits(iValue);

    printf("Average of digits : %f\n",fRet);

    return EXIT_SUCCESS;
}