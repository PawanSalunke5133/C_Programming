#include<stdio.h>
////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : pattern
//  Description   : Accepts two numbers and prints a pattern
//  Input         : Integer, Integer
//  Output        : None
//  Author        : Pawan Parmeshwar Salunke
//  Date          : 18/11/2026
//
////////////////////////////////////////////////////////
void pattern(int iRow, int iCol)
{
   int i = 0 , j =0;
   char ch = '\0';
    
    for(i=1; i<=iRow; i++)   
    {
        
        for(j=1,ch ='A'; j<=iCol; j++,ch++)
        {
           printf("%c\t", ch);
        }
        printf("\n\n");
    }
}
int main()
{
   int iValue1 = 0, iValue2 = 0;

   printf("Enter Number of Rows and Columns :\n");
   scanf("%d %d", &iValue1, &iValue2);
   
   pattern(iValue1,iValue2);

    return 0;
}