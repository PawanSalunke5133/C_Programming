#include<stdio.h>
///////////////////////////////////////////////////
//   Function Name    :   main
//   Input            :   none
//   Output           :   integer
//   Function Name    :   Display
//   Description      :   Prints "Hello" if input < 10, else "Demo"
//   Date             :   22/10/2026
//   Author           :   Pawan Parmeshwar Salunke
//
///////////////////////////////////////////////////
void Display (int iNo)
    {
    if(iNo < 10)
    {
     printf("Hello");
    }
    else
    {
     printf("Demo");
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
    printf("Enter number");
    scanf("%d", &iValue);

    Display(iValue);
    
    return 0;
}    