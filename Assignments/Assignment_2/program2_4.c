#include<stdio.h>
///////////////////////////////////////////////////
//
//   Function Name    :   Display
//   Input            :   Integer, Integer
//   Output           :   none
//   Description      :   Prints number based on frequency
//   Date             :   22/10/2026
//   Author           :   Pawan Parmeshwar Salunke
//
///////////////////////////////////////////////////
    void Display( int iNo, int iFrequency)
    {
      int i = 0;
    
     for(i = 0; i < iFrequency; i++)
    {
     printf("%d\t",iNo);
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
    int iCount = 0;

    printf("Enter number");
    scanf("%d" ,&iValue);

    printf("Enter frequency");
    scanf("%d" ,&iCount);

    Display(iValue, iCount);

    return 0;
}