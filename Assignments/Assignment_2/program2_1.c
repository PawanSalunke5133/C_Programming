#include<stdio.h>
///////////////////////////////////////////////////
//
//   Function Name    :   Display
//   Input            :   Integer 
//   Output           :   none 
//   Description      :   Displays stars (*) on screen based on the given number
//   Date             :   22/10/2026
//   Author           :   Pawan Parmeshwar Salunke
//
///////////////////////////////////////////////////
void Display(int iNo)
{
    int iCnt = 0;
    
    while(iCnt<iNo)
    {
        printf(" * ");
        iCnt++;
    }
}
//////////////////////////////////////////////////
//  
//  Entry Point of the Application 
//
///////////////////////////////////////////////////
int main()
{
    int iValue = 0;

    printf("Enter Number :");
    scanf("%d", &iValue);

    Display(iValue);
    return 0;
}