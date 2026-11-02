#include<stdio.h>
///////////////////////////////////////////////////
//
//   Function Name    :   OddDisplay
//   Input            :   Integer (iNo)
//   Output           :   none
//   Description      :   Prints odd numbers from 1 to iNo (handles negatives)
//   Date             :   2/11/2026
//   Author           :   Pawan Parmeshwar Salunke
//
///////////////////////////////////////////////////
void OddDisplay(int iNo)
{
    int iCnt = 0;
     if(iNo<=0)
        {
            iNo = -iNo;
        }

    for(iCnt = 1; iCnt <=iNo; iCnt+=2) 
    {
          printf("%d\t", iCnt);   
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

    OddDisplay(iValue);
    return 0;
}