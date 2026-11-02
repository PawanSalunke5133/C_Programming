#include<stdio.h>
///////////////////////////////////////////////////
//
//   Function Name    :   Pattern
//   Input            :   Integer (iNo)
//   Output           :   none
//   Description      :   Prints '$ * ' N times (handles negatives)
//   Date             :   2/11/2026
//   Author           :   Pawan Parmeshwar Salunke
//
///////////////////////////////////////////////////
void pattern(int iNo)
{
    int iCnt = 0;
     if(iNo<=0)
        {
            iNo = -iNo;
        }
    for(iCnt = 1; iCnt <=iNo; iCnt++) 
    {
         printf("$\t*\t");
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

    pattern(iValue);
    return 0;
}