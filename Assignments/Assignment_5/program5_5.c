#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////
//
//   Function Name    :   CheckCharacterType
//   Input            :   Character (cValue)
//   Output           :   none
//   Description      :   Identifies character type
//   Date             :   22/10/2026
//   Author           :   Pawan Parmeshwar Salunke
//
///////////////////////////////////////////////////
void CheckCharacterType(char cValue)
{
    if(cValue >= 'A' && cValue <= 'Z')
    {
        printf("Uppercase Alphabet\n");
    }
    else if(cValue >= 'a' && cValue <= 'z')
    {
        printf("Lowercase Alphabet\n");
    }
    else if(cValue >= '0' && cValue <= '9')
    {
        printf("Digit\n");
    }
    else
    {
        printf("Special Character\n");
    }
}

/////////////////////////////////////////////////
//  
//  Entry Point of the Application 
//
//////////////////////////////////////////////////
int main()
{
    char cValue = '\0';
    
    printf("Enter a character: ");
    scanf(" %c", &cValue);
    
    CheckCharacterType(cValue);
    
    return EXIT_SUCCESS;
}