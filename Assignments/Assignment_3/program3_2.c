#include<stdio.h>
///////////////////////////////////////////////////
//
//   Function Name    :   DisplayFactors
//   Input            :   Integer (iNo)
//   Output           :   none
//   Description      :   Displays 1 and even factors of the given number on screen
//   Date             :   22/10/2026
//   Author           :   Pawan Parmeshwar Salunke
//
///////////////////////////////////////////////////
void DisplayFactors(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo ;
    }

    int i =0;
    for(i=1; i<iNo; i++)
    {
        if(iNo % i ==0)
        {
            if(i == 1 || i % 2 == 0)
            {
               printf("%d\t", i);
            }
        } 
    }
}   
/////////////////////////////////////////////////
//  
//  Entry Point of the Application 
//
////////////////////////////////////////////////// 
int main()
{
    int iValue = 0;

    printf("Enter Number \n");
    scanf("%d", &iValue);
    
    DisplayFactors(iValue);

    return 0;
}