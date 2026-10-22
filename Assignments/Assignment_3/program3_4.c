#include<stdio.h>
///////////////////////////////////////////////////
//
//   Function Name    :   DispalyCovert
//   Input            :   Character (CValue)
//   Output           :   none
//   Description      :   Accepts a character and converts its case (lowercase to uppercase or vice versa)[cite: 1]
//   Date             :   22/10/2026
//   Author           :   Pawan Parmeshwar Salunke
//
///////////////////////////////////////////////////
void DispalyCovert(char CValue)
{
    if(CValue >= 'a' && CValue <='z')
    {
        printf("%c" , CValue -32);
    }
    else if(CValue >= 'A' && CValue <='Z')
    {
        printf("%c" , CValue + 32);
    }
}
/////////////////////////////////////////////////
//  
//  Entry Point of the Application 
//
//////////////////////////////////////////////////
int main()
{
    char cValue='\0';

    printf("Enter Cahracter : \n");
    scanf("%c", &cValue);

    DispalyCovert(cValue);
    return 0;
}