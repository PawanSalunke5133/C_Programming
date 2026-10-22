#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////
//
//   Function Name    :   CalculateBonus
//   Input            :   Float (fSalary), Integer (iYears)
//   Output           :   none
//   Description      :   Calculates employee bonus based on salary and service years
//   Date             :   22/10/2026
//   Author           :   Pawan Parmeshwar Salunke
//
///////////////////////////////////////////////////
void CalculateBonus(float fSalary, int iYears)
{
    float fBonus = 0.0f;
    
    if(fSalary <= 0.0f || iYears < 0)
    {
        printf("Invalid Input\n");
        return;
    }
    
    if(iYears > 10)
    {
        fBonus = fSalary * 0.15f;
    }
    else if(iYears >= 5)
    {
        fBonus = fSalary * 0.10f;
    }
    else
    {
        fBonus = fSalary * 0.05f;
    }
    
    printf("Bonus = %.2f\n", fBonus);
}

/////////////////////////////////////////////////
//  
//  Entry Point of the Application 
//
//////////////////////////////////////////////////
int main()
{
    float fSalary = 0.0f;
    int iYears = 0;
    
    printf("Enter salary and years of service: ");
    scanf("%f %d", &fSalary, &iYears);
    
    CalculateBonus(fSalary, iYears);
    
    return EXIT_SUCCESS;
}