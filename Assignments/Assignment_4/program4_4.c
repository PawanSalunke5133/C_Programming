#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////
//
//   Function Name    :   CheckVotingEligibility
//   Input            :   Integer (iAge)
//   Output           :   none
//   Description      :   Checks whether a person is eligible to vote based on age
//   Date             :   22/10/2026
//   Author           :   Pawan Parmeshwar Salunke
//
///////////////////////////////////////////////////
void CheckVotingEligibility(int iAge)
{
    // Write your logic here
    if(iAge < 0)
    {
        printf("Invalid Age\n");
    }
    else if(iAge >= 18)
    {
        printf("Eligible for Voting\n");
    }
    else
    {
        printf("Not Eligible for Voting\n");
    }
}

/////////////////////////////////////////////////
//  
//  Entry Point of the Application 
//
//////////////////////////////////////////////////
int main()
{
    int iAge = 0;
    
    printf("Enter your age: ");
    scanf("%d", &iAge);
    
    CheckVotingEligibility(iAge);
    
    return EXIT_SUCCESS;
}