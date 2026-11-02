#include<stdio.h>
///////////////////////////////////////////////////
//
//   Function Name    :   RectArea
//   Input            :   Integer (iNo)
//   Output           :   none
//   Description      :   Calculates Area of Rectangle (handles negatives)
//   Date             :   2/11/2026
//   Author           :   Pawan Parmeshwar Salunke
//
///////////////////////////////////////////////////
double RectArea(float fWidth, float fHeight)
{
    double dArea = 0.0;

    if(fWidth<0)
    {
        fWidth = -fWidth;
    }
    if(fHeight<0)
    {
        fHeight = -fHeight;
    }

    dArea = fWidth * fHeight;

    return dArea;
}
////////////////////////////////////////////////
//  
//  Entry Point of the Application 
//
//////////////////////////////////////////////////
int main()
{
    float fvalue = 0.0, fvalue2 = 0.0;
    double dRet = 0.0;

    printf("Enter Width  :\n");
    scanf("%f", &fvalue);

    printf("Enter Height :\n");
    scanf("%f", &fvalue2);

    dRet = RectArea(fvalue, fvalue2);

    printf("Area of Rectangle is :%f\n",dRet);
}