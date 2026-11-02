#include<stdio.h>
///////////////////////////////////////////////////
//
//   Function Name    :   CircleArea
//   Input            :   Integer (iNo)
//   Output           :   none
//   Description      :   Calculates Area of Circle (handles negatives)
//   Date             :   2/11/2026
//   Author           :   Pawan Parmeshwar Salunke
//
///////////////////////////////////////////////////

double CircleArea(float fRadius)
{
    float fPI = 3.14;
    double dArea = 0.0;

    if(fRadius<0)
    {
        fRadius = -fRadius;
    }

    dArea = fPI * fRadius * fRadius;

    return dArea;
}
////////////////////////////////////////////////
//  
//  Entry Point of the Application 
//
//////////////////////////////////////////////////
int main()
{  
    float fvalue = 0.0f;
    double dRet = 0.0;

    printf("Enter Radius :\n");
    scanf("%f", &fvalue);

    dRet = CircleArea(fvalue);

    printf("Area of Circle is :%f\n",dRet);
}