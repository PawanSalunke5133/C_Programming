#include<stdio.h>
///////////////////////////////////////////////////
//
//   Function Name    :   Display
//   Input            :   Integer (iNo)
//   Output           :   none
//   Description      :   Prints numbers from -iNo to iNo (handles negatives)
//   Date             :   2/11/2026
//   Author           :   Pawan Parmeshwar Salunke
//
///////////////////////////////////////////////////
void Display(int iNo)
{
    int iCnt = 0;
     
    for(iCnt = -iNo ; iCnt<=0; iCnt++) 
    {
        printf("%d\t",iCnt);  
    }  
    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        printf("%d\t",iCnt);  
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