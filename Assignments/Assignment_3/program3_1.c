#include<stdio.h>
///////////////////////////////////////////////////
//
//   Function Name    :   PrintEven
//   Input            :   Integer (iNo)
//   Output           :   none
//   Description      :   Prints even numbers based on the given count/limit
//   Date             :   22/10/2026
//   Author           :   Pawan Parmeshwar Salunke
//
///////////////////////////////////////////////////
void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return ;
    }
    int iCnt =0;
    for(iCnt=2; iCnt<=iNo; iCnt++)
    {
        printf("%d\t", iCnt * 2);
    }
}    
/////////////////////////////////////////////////
//  
//  Entry Point of the Application 
//
///////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter Number \n");
    scanf("%d", &iValue);
    
    PrintEven(iValue);

    return 0;
}