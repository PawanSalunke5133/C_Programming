#include<stdio.h>
///////////////////////////////////////////////////
//
//   Function Name    :  fhtoCs
//   Input            :   Float (fTemp)
//   Output           :   Double (dCelsius)
//   Description      :   Converts Fahrenheit to Celsius (handles negatives)
//   Date             :   2/11/2026
//   Author           :   Pawan Parmeshwar Salunke
//
///////////////////////////////////////////////////
double FhtoCs(float fTemp)
{
    double dCelsius = 0.0;

    dCelsius = (fTemp - 32) * (5.0/9.0);

    return dCelsius;
}
////////////////////////////////////////////////
//  
//  Entry Point of the Application 
//
//////////////////////////////////////////////////
int main()
{
    float fValue = 0.0, fRet = 0.0;

    printf("Enter Temperature in Fahrenheit:\n");
    scanf("%f", &fValue);

    fRet = FhtoCs(fValue);
  
    printf("Temperature in Celsius: %f\n", fRet);
}