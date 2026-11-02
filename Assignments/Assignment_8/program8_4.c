#include<stdio.h>
///////////////////////////////////////////////////
//
//   Function Name    :   Table
//   Input            :   Integer (iNo)
//   Output           :   none
//   Description      :   Prints multiplication tableReverse of iNo (handles negatives)
//   Date             :   2/11/2026
//   Author           :   Pawan Parmeshwar Salunke
//
///////////////////////////////////////////////////
void Table(int iNo)
{
    int iCnt = 0;
     if(iNo<=0)
        {
            iNo = -iNo;
        }
                        
    for(iCnt = 1; iCnt <=10; iCnt++) 
    {
          printf("%d\t",iNo *iCnt);
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

    Table(iValue);
    return 0;
}