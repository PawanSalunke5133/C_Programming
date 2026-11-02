#include<stdio.h>
///////////////////////////////////////////////////
//
//   Function Name    :   Display
//   Input            :   Integer (iNo)
//   Output           :   none
//   Description      :   Displays iNo * and iNo #
//   Date             :   2/11/2026
//   Author           :   Pawan Parmeshwar Salunke
//
///////////////////////////////////////////////////
void Display(int iNo)
{
    int iCnt = 0;
     if(iNo<=0)
        {
            iNo = -iNo;
        }
                        
    for(iCnt = 1; iCnt <=iNo; iCnt++) 
    {
        printf("*\t");
    }
    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        printf("#\t");
    }
    printf("\n");       
}   
        

/////////////////////////////////////////////////
//  
//  Entry Point of the Application 
//
//////////////////////////////////////////////////
int main()
{
    int iValue = 0;
    printf("Enter  number: ");
    scanf("%d", &iValue);

    Display(iValue);
    return 0;
}