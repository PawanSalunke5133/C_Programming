#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////
//
//   Function Name    :   CheckAdmission
//   Input            :   Float (fMarks), Integer (iAge)
//   Output           :   none
//   Description      :   Checks admission eligibility
//   Date             :   22/10/2026
//   Author           :   Pawan Parmeshwar Salunke
//
///////////////////////////////////////////////////
void CheckAdmission(float fMarks, int iAge)
{
    if(fMarks < 0.0f || fMarks > 100.0f || iAge < 0)
    {
        printf("Invalid Input\n");
    }
    else if(fMarks >= 60.0f && iAge >= 17)
    {
        printf("Eligible for Admission\n");
    }
    else
    {
        printf("Not Eligible\n");
    }
}

/////////////////////////////////////////////////
//  
//  Entry Point of the Application 
//
//////////////////////////////////////////////////
int main()
{
    float fMarks = 0.0f;
    int iAge = 0;
    
    printf("Enter marks and age: ");
    scanf("%f %d", &fMarks, &iAge);
    
    CheckAdmission(fMarks, iAge);
    
    return EXIT_SUCCESS;
}