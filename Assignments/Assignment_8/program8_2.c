#include<stdio.h>
///////////////////////////////////////////////////
//
//   Function Name    :   Display
//   Input            :   Integer (iNo)
//   Output           :   none
//   Description      :   Prints numbers from 1 to iNo (handles negatives)
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
        if(iNo==1)
        {
            printf("One\n");
        }
        else if(iNo==2)
        {
            printf("Two\n");
        }
        else if(iNo==3)
        { 
            printf("Three\n");
        }
        else if(iNo==4)
        {
            printf("Four\n");
        }
        else if(iNo==5)
        {
            printf("Five\n");
        }
        else if(iNo==6)
        {
            printf("Six\n");
        }
        else if(iNo==7)
        {
            printf("Seven\n");
        }
        else if(iNo==8)
        {
            printf("Eight\n");
        }
        else if(iNo==9)
        {
            printf("Nine\n");
        }
        else
        {
            printf("Invalid Number\n");
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