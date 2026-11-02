#include<stdio.h>
///////////////////////////////////////////////////
//
//   Function Name    :   Number
//   Input            :   Integer (iNo)
//   Output           :   none
//   Description      :   Prints size category of a number 
//   Date             :   2/11/2026
//   Author           :   Pawan Parmeshwar Salunke
//
///////////////////////////////////////////////////
void Number(int iNo)
{
    int iCnt = 0;

        if(iNo<50)
        {
            printf("small\n");
        }    
        else if(iNo>50 && iNo<100)
        {
            printf(" Medium\n");
        }
        else if(iNo>100)
        {
            printf("Large\n"); 
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
    printf("Enter  number: ");
    scanf("%d", &iValue);

    Number(iValue);
    return 0;
}