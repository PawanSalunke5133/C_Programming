#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////
//
//   Function Name    :   CalculateDiscount
//   Input            :   Float (fAmount)
//   Output           :   none
//   Description      :   Calculates shopping discount and payable amount
//   Date             :   22/10/2026
//   Author           :   Pawan Parmeshwar Salunke
//
///////////////////////////////////////////////////
void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;
    
    if(fAmount < 0.0f)
    {
        printf("Invalid Amount\n");
        return;
    }
    
    if(fAmount >= 5000.0f)
    {
        fDiscount = 0.20f;
    }
    else if(fAmount >= 1000.0f)
    {
        fDiscount = 0.10f;
    }
    else
    {
        fDiscount = 0.0f;
    }
    
    fFinalAmount = fAmount - (fAmount * fDiscount);
    printf("Payable Amount = %.2f\n", fFinalAmount);
}

/////////////////////////////////////////////////
//  
//  Entry Point of the Application 
//
//////////////////////////////////////////////////
int main()
{
    float fAmount = 0.0f;
    
    printf("Enter purchase amount: ");
    scanf("%f", &fAmount);
    
    CalculateDiscount(fAmount);
    
    return EXIT_SUCCESS;
}