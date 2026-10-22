#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////
//
//   Function Name    :   CalculateElectricityBill
//   Input            :   Integer (iUnits)
//   Output           :   none
//   Description      :   Calculates electricity bill based on slab rates
//   Date             :   22/10/2026
//   Author           :   Pawan Parmeshwar Salunke
//
///////////////////////////////////////////////////
void CalculateElectricityBill(int iUnits)
{
    float fBill = 0.0f;
    
    if(iUnits < 0)
    {
        printf("Invalid Units\n");
        return;
    }
    
    if(iUnits <= 100)
    {
        fBill = iUnits * 5.0f;
    }
    else if(iUnits <= 200)
    {
        fBill = (100 * 5.0f) + ((iUnits - 100) * 7.0f);
    }
    else
    {
        fBill = (100 * 5.0f) + (100 * 7.0f) + ((iUnits - 200) * 10.0f);
    }
    
    printf("Bill = %.2f\n", fBill);
}

/////////////////////////////////////////////////
//  
//  Entry Point of the Application 
//
//////////////////////////////////////////////////
int main()
{
    int iUnits = 0;
    
    printf("Enter consumed units: ");
    scanf("%d", &iUnits);
    
    CalculateElectricityBill(iUnits);
    
    return EXIT_SUCCESS;
}